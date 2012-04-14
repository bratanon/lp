; API

api = 2

core = 7.12

; Stable modules

projects[ctools][version] = 1.0
projects[panels][version] = 3.2
projects[views][version] = 3.3

projects[devel][version] = 1.2
projects[coder][version] = 1.0

projects[entity][version] = 1.0-rc1
projects[file_entity][version] = 2.0-unstable3

projects[diff] = 2.0
projects[features][version] = 1.0-beta6
projects[strongarm][version] = 2.0-rc1

projects[token][version] = 1.0-rc1
projects[pathauto][version] = 1.0

projects[link][version] = 1.0


; We run with the dev version to get exportability.
projects[wysiwyg][type] = module
projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = 60ea63c0b609f89878dfdf87616f3a88268b5217

; Needed for bug fixes.
projects[admin_menu][type] = module
projects[admin_menu][version] = 3.x-dev
projects[admin_menu][download][type] = git
projects[admin_menu][download][revision] = f6d25420fc66f7f57cc8240970bdbade64215c51

; In wait for new release of PE, see http://drupal.org/node/1427180
projects[panels_everywhere][type] = module
projects[panels_everywhere][version] = 1.x-dev
projects[panels_everywhere][download][type] = git
projects[panels_everywhere][download][revision] = 02f883d


; Libraries

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz
libraries[ckeditor][destination] = libraries

libraries[tinymce][download][type] = get
libraries[tinymce][download][url] = https://github.com/downloads/tinymce/tinymce/tinymce_3.4.5.zip
libraries[tinymce][destination] = libraries

; Patches

; http://drupal.org/node/624018#comment-4519502
projects[wysiwyg][patch][] = http://drupal.org/files/issues/wysiwyg-entity-exportables-624018-176_1.patch

; http://drupal.org/node/1247292
projects[views][patch][] = http://drupal.org/files/issues/node_revision_display_content.patch

; http://drupal.org/node/1417434
projects[panels][patch][] = http://drupal.org/files/panels-only-modify-numeric-pids-on-export-1417434-4.patch

; http://drupal.org/node/1314876
projects[file_entity][patch][] = http://drupal.org/files/file-entity-ctools-content-types.patch

; http://drupal.org/node/1515156
projects[views][patch][] = http://drupal.org/files/views-1515156-5.patch