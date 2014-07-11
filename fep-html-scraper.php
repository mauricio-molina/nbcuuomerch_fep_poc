<?php
$html = '';
$target_node_id = 'main-wrapper'; // This is what we want in Drupal. Can be changed if the backend gets switched.
$template_dir = '../../../patternlab-php/source/_patterns/04-pages';
$url = empty($_GET['url']) ? $url = '' : $_GET['url'];


if (!empty($_POST['filename'])) {
  if (!empty($_POST['html'])) {
    $filename = preg_replace('/[^\w.-]/', '', $_POST['filename']);
    $html = $_POST['html'];
  }
  if (empty($filename) || empty($html)) {
    echo '<p style="color: red;">There was a problem with your submission!</p>';
  } else {
    file_put_contents($template_dir . '/' .  $filename . '.mustache', $html);
    echo '<p style="color: green;">Submission successful! Now check your template in Pattern Lab by navigating to it in the Pages menu of the toolbar.</p>';
  }
}
elseif (!empty($_POST['html'])) {
  echo '<p style="color: red;">Please enter a filename!</p>';
}


?>
<h1>FEP HTML Scraper</h1>
<form>
  <label for="url">Enter URL:</label>
  <input name="url" type="text" size="99" value="<?php echo $url; ?>" />
  <input name="url-form" type="submit" value="Submit" />
</form>
<?php


if (!empty($_GET['url'])) :

  $doc = new DOMDocument();
  $doc->loadHTMLFile($url);
  $context = $doc->getElementById($target_node_id);
  $html = $doc->saveHTML($context);
  echo '<div style="border: 1px solid black;padding: 20px;width: 999px;">' . $html . '</div>';


?>
<h2>Does this HTML look right?</h2>
<form method="post">
  Yes, import into Frontend Prototyper.<br />
  <label for="import-form">Enter a filename to save this HTML:</label>
  <input name="filename" type="text" />
  <textarea name="html" style="display: none;"><?php echo $html; ?>"</textarea>
  <input name="import-form" type="submit" value="Submit" />
</form>
<p>Otherwise, correct the URL and submit again.</p>
<button id="help-button" onclick="toggleHelp();">Help</button>
<div id="help-text" style="border: 1px solid black;display: none;margin-top: 20px;padding: 0 20px;width: 999px">
  <p style="line-height: 1.8em;">Use this tool to scrape and import the HTML outputted by the backend of your webapp. Your webapp should be installed into the backend directory of Frontend Prototyper. From there, your webapp should be served by your web server. Enter the URL of the backend page you wish to prototype and submit. If the output looks correct, enter a filename and submit. This scraper will save the HTML to a Mustache template of that name in Pattern Lab. Be sure your template directory is writable by your web server! To access that template in Pattern Lab, navigate to that filename in the Pages menu of the toolbar.</p>
</div>
<script type="text/javascript">
function toggleHelp() {
  var button = document.getElementById('help-button');
  var text = document.getElementById('help-text');
  if (button.innerHTML == 'Help') {
    button.innerHTML = 'Hide';
    text.style.display = 'block';
  } else {
    button.innerHTML = 'Help';
    text.style.display = 'none';
  }
}
</script>
<?php


endif;
?>
