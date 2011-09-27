<?php
/**
 * @file
 * lp_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lp_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lp_structure_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_wysiwyg_profile().
 */
function lp_structure_default_wysiwyg_profile() {
  $items = array();
  $items['ckeditor'] = entity_import('wysiwyg_profile', '{
    "format" : "ckeditor",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "Bold" : 1,
          "Italic" : 1,
          "Underline" : 1,
          "BulletedList" : 1,
          "NumberedList" : 1,
          "Link" : 1,
          "Unlink" : 1,
          "Image" : 1
        },
        "Linkit" : { "Linkit" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 0,
      "paste_auto_cleanup_on_paste" : 0,
      "block_formats" : "p,address,pre,h2,h3,h4,h5,h6,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    }
  }');
  $items['fckeditor'] = entity_import('wysiwyg_profile', '{
    "format" : "fckeditor",
    "editor" : "tinymce",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "bold" : 1,
          "italic" : 1,
          "underline" : 1,
          "bullist" : 1,
          "numlist" : 1,
          "link" : 1,
          "unlink" : 1,
          "image" : 1
        },
        "linkit" : { "linkit" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 0,
      "paste_auto_cleanup_on_paste" : 0,
      "block_formats" : "p,address,pre,h2,h3,h4,h5,h6,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    }
  }');
  $items['plain_text'] = entity_import('wysiwyg_profile', '{ "format" : "plain_text", "editor" : "", "settings" : null }');
  $items['tinymce'] = entity_import('wysiwyg_profile', '{
    "format" : "tinymce",
    "editor" : "fckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "Bold" : 1,
          "Italic" : 1,
          "Underline" : 1,
          "UnorderedList" : 1,
          "OrderedList" : 1,
          "Link" : 1,
          "Unlink" : 1,
          "Image" : 1
        },
        "linkit" : { "linkit" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 0,
      "paste_auto_cleanup_on_paste" : 0,
      "block_formats" : "p,address,pre,h2,h3,h4,h5,h6,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    }
  }');
  return $items;
}
