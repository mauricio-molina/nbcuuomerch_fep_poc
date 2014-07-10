module.exports = function(grunt) {
  grunt.initConfig({
    compass: {
      target: {
        options: {
          config: 'config.rb'
        }
      }
    },
/*
    // This works but isn't appropiate here.
    // Keeping as a reference for another gruntfile at a different part of the
    // workflow. Will delete.
    uglify: {
      target: {
        files: {
          'styleguide/js/scripts.min.js': ['js/*.js']
        }
      }
    },
*/
    watch: {
      sass: {
        files: ['sass/*/*.scss', 'sass/*.scss'],
        tasks: ['compass:target']
      },
/*
      // Same as above.
      scripts: {
        files: ['js/*.js'],
        tasks: ['uglify:target']
      }
*/
    },
    shell: {
      patternlab: {
        command: "php ../core/builder.php -wr"
      }
    },
    concurrent: {
      target: {
        tasks: ['watch:sass', 'shell:patternlab'],
        options: {
          logConcurrentOutput: true
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-concurrent');
  grunt.loadNpmTasks('grunt-contrib-compass');
/*
  // Same as above.
  grunt.loadNpmTasks('grunt-contrib-uglify');
*/
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-shell');

  grunt.registerTask('default', ['concurrent:target']);
}
