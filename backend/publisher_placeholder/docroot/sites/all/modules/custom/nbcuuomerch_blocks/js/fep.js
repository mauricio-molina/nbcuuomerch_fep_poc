/**
 * Define all custom functions here and call them in their appropriate mustache
 * files. Copy this file to patternlab-php/source/js. Then add the following
 * line to  patternlab-php/source/_patterns/00-atoms/00-meta/_00-head.mustache:
 * <script src="../../js/fep.js?{{ cacheBuster}}"></script>
 */

var FEP = FEP || {};

// To test the auto-reloading of js, call the following function in a mustache
// template in source/_patterns/04-pages.
FEP.test = function() {
  console.log('foo');
};
