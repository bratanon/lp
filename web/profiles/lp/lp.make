; API
api = 2

; Core
core = 7.x

; Stable modules
projects[ctools][version] = "1.x-dev"
projects[coder][version] = "1.0"
projects[devel][version] = "1.2"
projects[diff][version] = "2.0"
projects[imce][version] = "1.4"
projects[panels][version] = "3.0-alpha3"
projects[token][version] = "1.0-beta2"
projects[uuid_features][version] = "1.x-dev"
projects[views][version] = "3.0-rc1"

; Unstable modules

; UUID
projects[uuid][type] = module
projects[uuid][download][type] = git
projects[uuid][download][url] = http://git.drupal.org/project/uuid.git
projects[uuid][download][revision] = 0bda52f446cc88e02f4b9e9f2bc462ba006e417e

; Entity
projects[entity][type] = module
projects[entity][download][type] = git
projects[entity][download][url] = http://git.drupal.org/project/entity.git
projects[entity][download][revision] = 133a9330b9d858d49360e3bd00a85f49e049cbde

; We run with the dev version to get exportability.
projects[wysiwyg][type] = module
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][url] = http://git.drupal.org/project/wysiwyg.git
projects[wysiwyg][download][revision] = 60ea63c0b609f89878dfdf87616f3a88268b5217

; Dev version needed for bug fixes
projects[features][type] = module
projects[features][download][type] = git
projects[features][download][url] = http://git.drupal.org/project/features.git
projects[features][download][revision] = 32db06535dd702eb9b9c6dc6e93a9254ccb9f5af

; Needed since we need to patch it.
projects[strongarm][type] = module
projects[strongarm][download][type] = git
projects[strongarm][download][url] = http://git.drupal.org/project/strongarm.git
projects[strongarm][download][revision] = b53da07



; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz
libraries[ckeditor][destination] = libraries

libraries[tinymce][download][type] = get
libraries[tinymce][download][url] = https://github.com/downloads/tinymce/tinymce/tinymce_3.4.5.zip
libraries[tinymce][destination] = libraries

libraries[fckeditor][download][type] = get
libraries[fckeditor][download][url] = http://sourceforge.net/project/downloading.php?group_id=75348&filename=FCKeditor_2.6.6.tar.gz
libraries[fckeditor][destination] = libraries

; Patches

; http://drupal.org/node/624018#comment-4519502
projects[wysiwyg][patch][] = http://drupal.org/files/issues/wysiwyg-entity-exportables-624018-176_1.patch

; http://drupal.org/node/1062452
projects[strongarm][patch][] = http://drupal.org/files/issues/strongarm_set_conf-needs-to-be-called-sooner-1062452--3.patch

; http://drupal.org/node/776216
projects[uuid][patch][] = http://drupal.org/files/issues/views_support_for_uuid-776216-39.patch

; http://drupal.org/node/1277428
projects[uuid][patch][] = http://drupal.org/files/issues/uuid-ctools-argument.patch