module.exports = function(grunt) {
  grunt.initConfig({
    compass: {
      target: {
        options: {
          config: 'config.rb',
        }
      }
    },
    jshint: {
      all: {
        src: 'js/fep.js',
        options: {
          globals: {
            jQuery: true,
          }
        }
      }
    },
    sync: {
      css: {
        files: {
          cwd: 'css',
          src: '**', // Include everything
          dest: '../../backend/publisher_placeholder/docroot/sites/all/modules/custom/nbcuuomerch_blocks/css',
        },
        verbose: true,
      },
      js: {
        files: {
          cwd: 'js',
          src: 'fep.js',
          dest: '../../backend/publisher_placeholder/docroot/sites/all/modules/custom/nbcuuomerch_blocks/js',
        },
        verbose: true,
      }
    },
    uglify: {
      target: {
        files: {
          '../../backend/publisher_placeholder/docroot/sites/all/modules/custom/nbcuuomerch_blocks/js/scripts.min.js': 'js/fep.js',
        }
      }
    },
    watch: {
      compass: {
        files: 'sass/**/*.scss',
        tasks: 'compass:target',
      },
      css: {
        files: 'css/*.css',
        tasks: 'sync:css',
      },
      js: {
        files: 'js/fep.js',
        tasks: ['jshint:all', 'sync:js', 'uglify:target'],
      }
    },
    shell: {
      patternlab: {
        command: "php ../core/builder.php -wr",
      }
    },
    concurrent: {
      target: {
        tasks: ['watch:compass', 'watch:css', 'watch:js', 'shell:patternlab'],
        options: {
          logConcurrentOutput: true,
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-concurrent');
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-shell');
  grunt.loadNpmTasks('grunt-sync');

  grunt.registerTask('default', 'concurrent:target');
}
