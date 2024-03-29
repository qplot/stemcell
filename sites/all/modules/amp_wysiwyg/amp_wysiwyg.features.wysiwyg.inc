<?php
/**
 * @file
 * amp_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function amp_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'fontselect' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
      ),
      'theme_advanced_toolbar_location' => 'top',
      'theme_advanced_toolbar_align' => 'left',
      'theme_advanced_statusbar_location' => 'bottom',
      'theme_advanced_resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'css_setting' => 'theme',
      'css_path' => '',
      'theme_advanced_styles' => '',
      'theme_advanced_blockformats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-appearance',
      'paste_auto_cleanup_on_paste' => 1,
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'image' => 1,
          'fontselect' => 1,
          'fontsizeselect' => 1,
          'sup' => 1,
          'sub' => 1,
          'code' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
        ),
        'insertdatetime' => array(
          'insertdate' => 1,
          'inserttime' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
          'selectall' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'xhtmlxtras' => array(
          'cite' => 1,
        ),
      ),
      'theme_advanced_toolbar_location' => 'top',
      'theme_advanced_toolbar_align' => 'left',
      'theme_advanced_statusbar_location' => 'bottom',
      'theme_advanced_resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'css_setting' => 'theme',
      'css_path' => '',
      'theme_advanced_styles' => '',
      'theme_advanced_blockformats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-output',
      'paste_auto_cleanup_on_paste' => 1,
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
