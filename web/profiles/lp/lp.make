; API
api = 2

; Core
core = 7.x
projects[drupal][version] = 7.8

; Stable modules

projects[ctools][version] = 1.0-rc
projects[diff] = 2.0
projects[features][version] = 1.0-beta4
projects[strongarm][version] = 2.0-beta3
projects[views][version] = 3.0-rc1
projects[coder][version] = 1.0
projects[devel][version] = 1.2
projects[entity][version] = 1.0-beta10
projects[imce][version] = 1.4
#projects[imce_wysiwyg][version] = 
#projects[pathauto][version] = 
#projects[pathologic][version] = 
projects[token][version] = 1.0-beta2
projects[uuid][version] = 1.0-alpha2
projects[uuid_features][version] = 1.x-dev

; We run with the dev version to get exportability.
projects[wysiwyg][type] = module
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][url] = http://git.drupal.org/project/wysiwyg.git
projects[wysiwyg][download][revision] = 60ea63c0b609f89878dfdf87616f3a88268b5217


; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz
libraries[ckeditor][destination] = libraries

libraries[tinymce][download][type] = get
libraries[tinymce][download][url] = http://www.tinymce.com/track.php?url=http%3A%2F%2Fgithub.com%2Fdownloads%2Ftinymce%2Ftinymce%2Ftinymce_3.4.5.zip
libraries[ckeditor][destination] = libraries

libraries[fckeditor][download][type] = get
libraries[fckeditor][download][url] = http://sourceforge.net/project/downloading.php?group_id=75348&filename=FCKeditor_2.6.6.tar.gz
libraries[fckeditor][destination] = libraries

; Patches

; http://drupal.org/node/624018#comment-4519502
projects[wysiwyg][patch][] = http://drupal.org/files/issues/wysiwyg-entity-exportables-624018-176_1.patch

; http://drupal.org/node/1288648
projects[features][patch][] = http://drupal.org/files/issues/ctools_component_features_api-define-your-own-components.patch