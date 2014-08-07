<?php
/**
 * @file
 * amp_user_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amp_user_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'amp_sc_user_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'amp_sc_user_export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First/Given Name */
  $handler->display->display_options['fields']['field_first_given_name']['id'] = 'field_first_given_name';
  $handler->display->display_options['fields']['field_first_given_name']['table'] = 'field_data_field_first_given_name';
  $handler->display->display_options['fields']['field_first_given_name']['field'] = 'field_first_given_name';
  /* Field: User: Last/Family Name */
  $handler->display->display_options['fields']['field_last_family_name']['id'] = 'field_last_family_name';
  $handler->display->display_options['fields']['field_last_family_name']['table'] = 'field_data_field_last_family_name';
  $handler->display->display_options['fields']['field_last_family_name']['field'] = 'field_last_family_name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: User: Address 1 */
  $handler->display->display_options['fields']['field_address_1']['id'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['table'] = 'field_data_field_address_1';
  $handler->display->display_options['fields']['field_address_1']['field'] = 'field_address_1';
  /* Field: User: Address 2 */
  $handler->display->display_options['fields']['field_address_2']['id'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['table'] = 'field_data_field_address_2';
  $handler->display->display_options['fields']['field_address_2']['field'] = 'field_address_2';
  /* Field: User: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: User: Zip/Postal Code */
  $handler->display->display_options['fields']['field_zip_postal_code']['id'] = 'field_zip_postal_code';
  $handler->display->display_options['fields']['field_zip_postal_code']['table'] = 'field_data_field_zip_postal_code';
  $handler->display->display_options['fields']['field_zip_postal_code']['field'] = 'field_zip_postal_code';
  /* Field: User: State/Province */
  $handler->display->display_options['fields']['field_state_province']['id'] = 'field_state_province';
  $handler->display->display_options['fields']['field_state_province']['table'] = 'field_data_field_state_province';
  $handler->display->display_options['fields']['field_state_province']['field'] = 'field_state_province';
  /* Field: User: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  /* Field: User: What is your area of interest? (Check all that apply)* */
  $handler->display->display_options['fields']['field_what_is_your_area_of_inter']['id'] = 'field_what_is_your_area_of_inter';
  $handler->display->display_options['fields']['field_what_is_your_area_of_inter']['table'] = 'field_data_field_what_is_your_area_of_inter';
  $handler->display->display_options['fields']['field_what_is_your_area_of_inter']['field'] = 'field_what_is_your_area_of_inter';
  $handler->display->display_options['fields']['field_what_is_your_area_of_inter']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_what_is_your_area_of_inter']['separator'] = ';';
  /* Field: User: What is your professional role? */
  $handler->display->display_options['fields']['field_what_is_your_professional_']['id'] = 'field_what_is_your_professional_';
  $handler->display->display_options['fields']['field_what_is_your_professional_']['table'] = 'field_data_field_what_is_your_professional_';
  $handler->display->display_options['fields']['field_what_is_your_professional_']['field'] = 'field_what_is_your_professional_';
  $handler->display->display_options['fields']['field_what_is_your_professional_']['delta_offset'] = '0';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'long';
  /* Field: User: Stemcell's Newsletter Confirmation */
  $handler->display->display_options['fields']['field_stemcell_s_newsletter_conf']['id'] = 'field_stemcell_s_newsletter_conf';
  $handler->display->display_options['fields']['field_stemcell_s_newsletter_conf']['table'] = 'field_data_field_stemcell_s_newsletter_conf';
  $handler->display->display_options['fields']['field_stemcell_s_newsletter_conf']['field'] = 'field_stemcell_s_newsletter_conf';
  $handler->display->display_options['fields']['field_stemcell_s_newsletter_conf']['type'] = 'list_key';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/user-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'admin/user-export/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['amp_sc_user_export'] = $view;

  return $export;
}
