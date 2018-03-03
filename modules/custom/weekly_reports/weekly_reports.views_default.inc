<?php
/**
 * @file
 * weekly_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function weekly_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_program_ref_target_id']['id'] = 'field_program_ref_target_id';
  $handler->display->display_options['relationships']['field_program_ref_target_id']['table'] = 'field_data_field_program_ref';
  $handler->display->display_options['relationships']['field_program_ref_target_id']['field'] = 'field_program_ref_target_id';
  $handler->display->display_options['relationships']['field_program_ref_target_id']['label'] = 'Event Report (Program Ref)';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_who_was_present_target_id']['id'] = 'field_who_was_present_target_id';
  $handler->display->display_options['relationships']['field_who_was_present_target_id']['table'] = 'field_data_field_who_was_present';
  $handler->display->display_options['relationships']['field_who_was_present_target_id']['field'] = 'field_who_was_present_target_id';
  $handler->display->display_options['relationships']['field_who_was_present_target_id']['label'] = 'Event Report (User Ref)';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = 'Date for the Report';
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_1']['delta_offset'] = '0';
  /* Field: Content: TA Lead */
  $handler->display->display_options['fields']['field_who_provided_services']['id'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['field'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['label'] = 'Who Provided Services';
  $handler->display->display_options['fields']['field_who_provided_services']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_provided_services']['delta_offset'] = '0';
  /* Field: Content: People Present */
  $handler->display->display_options['fields']['field_who_was_present']['id'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['table'] = 'field_data_field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['field'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['label'] = 'Who Was Present';
  $handler->display->display_options['fields']['field_who_was_present']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_was_present']['delta_offset'] = '0';
  /* Field: Content: Program(s) Present */
  $handler->display->display_options['fields']['field_program_ref']['id'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['table'] = 'field_data_field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['field'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['label'] = 'Which Program was Present';
  $handler->display->display_options['fields']['field_program_ref']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_program_ref']['delta_offset'] = '0';
  /* Field: Content: Please describe the event */
  $handler->display->display_options['fields']['field_ta_description']['id'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['table'] = 'field_data_field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['field'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_ta_description']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]">view</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[nid] | [edit_node]';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'View/Edit';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[nid] | [edit_node]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page - Events */
  $handler = $view->new_display('page', 'Page - Events', 'page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'Array',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_block'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = 'Date for the Report';
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_1']['delta_offset'] = '0';
  /* Field: Content: TA Lead */
  $handler->display->display_options['fields']['field_who_provided_services']['id'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['field'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['label'] = 'Who Provided Services';
  $handler->display->display_options['fields']['field_who_provided_services']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_provided_services']['delta_offset'] = '0';
  /* Field: Content: People Present */
  $handler->display->display_options['fields']['field_who_was_present']['id'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['table'] = 'field_data_field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['field'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['label'] = 'Who Was Present';
  $handler->display->display_options['fields']['field_who_was_present']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_was_present']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_who_was_present']['multi_type'] = 'ul';
  /* Field: Content: Programs That Were Present */
  $handler->display->display_options['fields']['field_peeps_or_progs']['id'] = 'field_peeps_or_progs';
  $handler->display->display_options['fields']['field_peeps_or_progs']['table'] = 'field_data_field_peeps_or_progs';
  $handler->display->display_options['fields']['field_peeps_or_progs']['field'] = 'field_peeps_or_progs';
  $handler->display->display_options['fields']['field_peeps_or_progs']['label'] = 'Which Programs Were Present';
  $handler->display->display_options['fields']['field_peeps_or_progs']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_peeps_or_progs']['delta_offset'] = '0';
  /* Field: Content: Please describe the event */
  $handler->display->display_options['fields']['field_ta_description']['id'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['table'] = 'field_data_field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['field'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_ta_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_ta_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ta_description']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]">view</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[nid] | [edit_node]';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'View/Edit';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[nid] | [edit_node]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '0',
    3 => '0',
  );
  $handler->display->display_options['filters']['field_date_value']['group_info']['remember'] = '0';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '0',
    3 => '0',
  );
  $handler->display->display_options['filters']['field_date_value_1']['group_info']['remember'] = '0';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  /* Filter criterion: Content: TA Lead (field_who_provided_services) */
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['id'] = 'field_who_provided_services_target_id';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['field'] = 'field_who_provided_services_target_id';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['operator_id'] = 'field_who_provided_services_target_id_op';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['label'] = 'Who Provided Services';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['operator'] = 'field_who_provided_services_target_id_op';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['identifier'] = 'field_who_provided_services_target_id';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '0',
    4 => '0',
    3 => '0',
  );
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['group_info']['remember'] = '0';
  /* Filter criterion: Content: People Present (field_who_was_present) */
  $handler->display->display_options['filters']['field_who_was_present_target_id']['id'] = 'field_who_was_present_target_id';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['table'] = 'field_data_field_who_was_present';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['field'] = 'field_who_was_present_target_id';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['value'] = '';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_who_was_present_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_who_was_present_target_id']['expose']['operator_id'] = 'field_who_was_present_target_id_op';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['expose']['label'] = 'People Who Were Present';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['expose']['operator'] = 'field_who_was_present_target_id_op';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['expose']['identifier'] = 'field_who_was_present_target_id';
  $handler->display->display_options['filters']['field_who_was_present_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '0',
    3 => '0',
  );
  $handler->display->display_options['filters']['field_who_was_present_target_id']['group_info']['remember'] = '0';
  /* Filter criterion: Content: Programs That Were Present (field_peeps_or_progs) */
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['id'] = 'field_peeps_or_progs_target_id';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['table'] = 'field_data_field_peeps_or_progs';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['field'] = 'field_peeps_or_progs_target_id';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['value'] = '';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['expose']['operator_id'] = 'field_peeps_or_progs_target_id_op';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['expose']['label'] = 'Programs Present';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['expose']['operator'] = 'field_peeps_or_progs_target_id_op';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['expose']['identifier'] = 'field_peeps_or_progs_target_id';
  $handler->display->display_options['filters']['field_peeps_or_progs_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'reports/events';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['description'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '-30';
  $handler->display->display_options['menu']['context'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Reports';
  $handler->display->display_options['tab_options']['description'] = 'Reports';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page - Weekly Reports */
  $handler = $view->new_display('page', 'Page - Weekly Reports', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Weekly Reports';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'Array',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_date_value_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_who_provided_services_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_program_ref_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_ta_or_outreach_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_categories_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_spf_steps_done_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_topics_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = 'Date for the Report';
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_1']['delta_offset'] = '0';
  /* Field: Content: TA Lead */
  $handler->display->display_options['fields']['field_who_provided_services']['id'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['field'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['label'] = 'Who Provided Services';
  $handler->display->display_options['fields']['field_who_provided_services']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_provided_services']['delta_offset'] = '0';
  /* Field: Content: People Present */
  $handler->display->display_options['fields']['field_who_was_present']['id'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['table'] = 'field_data_field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['field'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['label'] = 'Who Was Present';
  $handler->display->display_options['fields']['field_who_was_present']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_was_present']['delta_offset'] = '0';
  /* Field: Content: Program(s) Present */
  $handler->display->display_options['fields']['field_program_ref']['id'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['table'] = 'field_data_field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['field'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['label'] = 'Which Program was Present';
  $handler->display->display_options['fields']['field_program_ref']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_program_ref']['delta_offset'] = '0';
  /* Field: Content: Please describe the event */
  $handler->display->display_options['fields']['field_ta_description']['id'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['table'] = 'field_data_field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['field'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_ta_description']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_ta_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ta_description']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/node/[nid]">view</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[nid] | [edit_node]';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'View/Edit';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '[nid] | [edit_node]';
  /* Field: Content: SPF Steps Done */
  $handler->display->display_options['fields']['field_spf_steps_done']['id'] = 'field_spf_steps_done';
  $handler->display->display_options['fields']['field_spf_steps_done']['table'] = 'field_data_field_spf_steps_done';
  $handler->display->display_options['fields']['field_spf_steps_done']['field'] = 'field_spf_steps_done';
  $handler->display->display_options['fields']['field_spf_steps_done']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spf_steps_done']['delta_offset'] = '0';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'From:';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'from';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['group_info']['remember'] = '0';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'To';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'to';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_value_1']['group_info']['remember'] = '0';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'weekly_report' => 'weekly_report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['type']['group_info']['remember'] = '0';
  /* Filter criterion: Content: TA Lead (field_who_provided_services) */
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['id'] = 'field_who_provided_services_target_id';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['field'] = 'field_who_provided_services_target_id';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['operator_id'] = 'field_who_provided_services_target_id_op';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['label'] = 'Who Provided Services';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['operator'] = 'field_who_provided_services_target_id_op';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['identifier'] = 'ta_lead';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['group_info']['remember'] = '0';
  /* Filter criterion: Content: Program(s) Present (field_program_ref) */
  $handler->display->display_options['filters']['field_program_ref_target_id']['id'] = 'field_program_ref_target_id';
  $handler->display->display_options['filters']['field_program_ref_target_id']['table'] = 'field_data_field_program_ref';
  $handler->display->display_options['filters']['field_program_ref_target_id']['field'] = 'field_program_ref_target_id';
  $handler->display->display_options['filters']['field_program_ref_target_id']['value'] = '';
  $handler->display->display_options['filters']['field_program_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_program_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_ref_target_id']['expose']['operator_id'] = 'field_program_ref_target_id_op';
  $handler->display->display_options['filters']['field_program_ref_target_id']['expose']['label'] = 'Programs Present';
  $handler->display->display_options['filters']['field_program_ref_target_id']['expose']['operator'] = 'field_program_ref_target_id_op';
  $handler->display->display_options['filters']['field_program_ref_target_id']['expose']['identifier'] = 'program';
  $handler->display->display_options['filters']['field_program_ref_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_program_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_program_ref_target_id']['group_info']['remember'] = '0';
  /* Filter criterion: Content: TA or Outreach (field_ta_or_outreach) */
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['id'] = 'field_ta_or_outreach_value';
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['table'] = 'field_data_field_ta_or_outreach';
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['field'] = 'field_ta_or_outreach_value';
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['expose']['operator_id'] = 'field_ta_or_outreach_value_op';
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['expose']['label'] = 'TA or Outreach';
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['expose']['operator'] = 'field_ta_or_outreach_value_op';
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['expose']['identifier'] = 'ta_or_outreach';
  $handler->display->display_options['filters']['field_ta_or_outreach_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Categories (field_categories) */
  $handler->display->display_options['filters']['field_categories_value']['id'] = 'field_categories_value';
  $handler->display->display_options['filters']['field_categories_value']['table'] = 'field_data_field_categories';
  $handler->display->display_options['filters']['field_categories_value']['field'] = 'field_categories_value';
  $handler->display->display_options['filters']['field_categories_value']['relationship'] = 'field_program_ref_target_id';
  $handler->display->display_options['filters']['field_categories_value']['group'] = 1;
  $handler->display->display_options['filters']['field_categories_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categories_value']['expose']['operator_id'] = 'field_categories_value_op';
  $handler->display->display_options['filters']['field_categories_value']['expose']['label'] = 'Categories';
  $handler->display->display_options['filters']['field_categories_value']['expose']['operator'] = 'field_categories_value_op';
  $handler->display->display_options['filters']['field_categories_value']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_categories_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: SPF Steps Done (field_spf_steps_done) */
  $handler->display->display_options['filters']['field_spf_steps_done_value']['id'] = 'field_spf_steps_done_value';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['table'] = 'field_data_field_spf_steps_done';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['field'] = 'field_spf_steps_done_value';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['operator_id'] = 'field_spf_steps_done_value_op';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['label'] = 'SPF Steps Done';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['operator'] = 'field_spf_steps_done_value_op';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['identifier'] = 'spf_steps';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_value']['id'] = 'field_topics_value';
  $handler->display->display_options['filters']['field_topics_value']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_value']['field'] = 'field_topics_value';
  $handler->display->display_options['filters']['field_topics_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_value']['expose']['operator_id'] = 'field_topics_value_op';
  $handler->display->display_options['filters']['field_topics_value']['expose']['label'] = 'Topics';
  $handler->display->display_options['filters']['field_topics_value']['expose']['operator'] = 'field_topics_value_op';
  $handler->display->display_options['filters']['field_topics_value']['expose']['identifier'] = 'topics';
  $handler->display->display_options['filters']['field_topics_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topics_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'reports/weekly-reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Weekly Reports';
  $handler->display->display_options['menu']['description'] = 'Weekly Reports';
  $handler->display->display_options['menu']['weight'] = '-9999';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export - Events */
  $handler = $view->new_display('views_data_export', 'Data export - Events', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = '1';
  $handler->display->display_options['style_options']['filename'] = 'events-export.xls';
  $handler->display->display_options['style_options']['parent_sort'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = 'Date for the Report';
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_1']['delta_offset'] = '0';
  /* Field: Content: TA Lead */
  $handler->display->display_options['fields']['field_who_provided_services']['id'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['field'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['label'] = 'Who Provided Services';
  $handler->display->display_options['fields']['field_who_provided_services']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_provided_services']['delta_offset'] = '0';
  /* Field: Content: People Present */
  $handler->display->display_options['fields']['field_who_was_present']['id'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['table'] = 'field_data_field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['field'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['label'] = 'Who Was Present';
  $handler->display->display_options['fields']['field_who_was_present']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_was_present']['delta_offset'] = '0';
  /* Field: Content: Program(s) Present */
  $handler->display->display_options['fields']['field_program_ref']['id'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['table'] = 'field_data_field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['field'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['label'] = 'Which Program was Present';
  $handler->display->display_options['fields']['field_program_ref']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_program_ref']['delta_offset'] = '0';
  /* Field: Content: Total number of people present */
  $handler->display->display_options['fields']['field_total_num_people']['id'] = 'field_total_num_people';
  $handler->display->display_options['fields']['field_total_num_people']['table'] = 'field_data_field_total_num_people';
  $handler->display->display_options['fields']['field_total_num_people']['field'] = 'field_total_num_people';
  $handler->display->display_options['fields']['field_total_num_people']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => '1',
  );
  $handler->display->display_options['fields']['field_total_num_people']['delta_offset'] = '0';
  /* Field: Content: Event Duration (in hours) */
  $handler->display->display_options['fields']['field_num_hours']['id'] = 'field_num_hours';
  $handler->display->display_options['fields']['field_num_hours']['table'] = 'field_data_field_num_hours';
  $handler->display->display_options['fields']['field_num_hours']['field'] = 'field_num_hours';
  $handler->display->display_options['fields']['field_num_hours']['label'] = 'Total Number of Hours of Assistance';
  $handler->display->display_options['fields']['field_num_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => '1',
  );
  $handler->display->display_options['fields']['field_num_hours']['delta_offset'] = '0';
  /* Field: Content: Type of Event */
  $handler->display->display_options['fields']['field_type_of_event']['id'] = 'field_type_of_event';
  $handler->display->display_options['fields']['field_type_of_event']['table'] = 'field_data_field_type_of_event';
  $handler->display->display_options['fields']['field_type_of_event']['field'] = 'field_type_of_event';
  $handler->display->display_options['fields']['field_type_of_event']['delta_offset'] = '0';
  /* Field: Content: Please describe the event */
  $handler->display->display_options['fields']['field_ta_description']['id'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['table'] = 'field_data_field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['field'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_ta_description']['delta_offset'] = '0';
  /* Field: Content: Please list any emerging issues */
  $handler->display->display_options['fields']['field_emerging_issues']['id'] = 'field_emerging_issues';
  $handler->display->display_options['fields']['field_emerging_issues']['table'] = 'field_data_field_emerging_issues';
  $handler->display->display_options['fields']['field_emerging_issues']['field'] = 'field_emerging_issues';
  $handler->display->display_options['fields']['field_emerging_issues']['label'] = 'Please list any emerging issues identified this week';
  $handler->display->display_options['fields']['field_emerging_issues']['delta_offset'] = '0';
  /* Field: Content: Utilizing Epidemiological Data */
  $handler->display->display_options['fields']['field_utilizing_epid_thisweek']['id'] = 'field_utilizing_epid_thisweek';
  $handler->display->display_options['fields']['field_utilizing_epid_thisweek']['table'] = 'field_data_field_utilizing_epid_thisweek';
  $handler->display->display_options['fields']['field_utilizing_epid_thisweek']['field'] = 'field_utilizing_epid_thisweek';
  /* Field: Content: Risk and Protective Factors */
  $handler->display->display_options['fields']['field_risk_protective_thisweek']['id'] = 'field_risk_protective_thisweek';
  $handler->display->display_options['fields']['field_risk_protective_thisweek']['table'] = 'field_data_field_risk_protective_thisweek';
  $handler->display->display_options['fields']['field_risk_protective_thisweek']['field'] = 'field_risk_protective_thisweek';
  /* Field: Content: Needs Assessment */
  $handler->display->display_options['fields']['field_needs_assessment_thisweek']['id'] = 'field_needs_assessment_thisweek';
  $handler->display->display_options['fields']['field_needs_assessment_thisweek']['table'] = 'field_data_field_needs_assessment_thisweek';
  $handler->display->display_options['fields']['field_needs_assessment_thisweek']['field'] = 'field_needs_assessment_thisweek';
  /* Field: Content: Resource Assessment */
  $handler->display->display_options['fields']['field_resource_assess_thisweek']['id'] = 'field_resource_assess_thisweek';
  $handler->display->display_options['fields']['field_resource_assess_thisweek']['table'] = 'field_data_field_resource_assess_thisweek';
  $handler->display->display_options['fields']['field_resource_assess_thisweek']['field'] = 'field_resource_assess_thisweek';
  /* Field: Content: Other Step 1 Topic */
  $handler->display->display_options['fields']['field_other_step_1_topic']['id'] = 'field_other_step_1_topic';
  $handler->display->display_options['fields']['field_other_step_1_topic']['table'] = 'field_data_field_other_step_1_topic';
  $handler->display->display_options['fields']['field_other_step_1_topic']['field'] = 'field_other_step_1_topic';
  /* Field: Content: Grant Management */
  $handler->display->display_options['fields']['field_grant_management_this_week']['id'] = 'field_grant_management_this_week';
  $handler->display->display_options['fields']['field_grant_management_this_week']['table'] = 'field_data_field_grant_management_this_week';
  $handler->display->display_options['fields']['field_grant_management_this_week']['field'] = 'field_grant_management_this_week';
  /* Field: Content: Partnership/Coalition Building */
  $handler->display->display_options['fields']['field_partnership_coal_thisweek']['id'] = 'field_partnership_coal_thisweek';
  $handler->display->display_options['fields']['field_partnership_coal_thisweek']['table'] = 'field_data_field_partnership_coal_thisweek';
  $handler->display->display_options['fields']['field_partnership_coal_thisweek']['field'] = 'field_partnership_coal_thisweek';
  /* Field: Content: Organizational Development */
  $handler->display->display_options['fields']['field_organizational_dv_thisweek']['id'] = 'field_organizational_dv_thisweek';
  $handler->display->display_options['fields']['field_organizational_dv_thisweek']['table'] = 'field_data_field_organizational_dv_thisweek';
  $handler->display->display_options['fields']['field_organizational_dv_thisweek']['field'] = 'field_organizational_dv_thisweek';
  /* Field: Content: Mentoring Other Programs */
  $handler->display->display_options['fields']['field_mentoring_other_thisweek']['id'] = 'field_mentoring_other_thisweek';
  $handler->display->display_options['fields']['field_mentoring_other_thisweek']['table'] = 'field_data_field_mentoring_other_thisweek';
  $handler->display->display_options['fields']['field_mentoring_other_thisweek']['field'] = 'field_mentoring_other_thisweek';
  /* Field: Content: Other Step 2 Topic */
  $handler->display->display_options['fields']['field_other_step_2_thisweek']['id'] = 'field_other_step_2_thisweek';
  $handler->display->display_options['fields']['field_other_step_2_thisweek']['table'] = 'field_data_field_other_step_2_thisweek';
  $handler->display->display_options['fields']['field_other_step_2_thisweek']['field'] = 'field_other_step_2_thisweek';
  /* Field: Content: Strategic Planning */
  $handler->display->display_options['fields']['field_strategic_plan_thisweek']['id'] = 'field_strategic_plan_thisweek';
  $handler->display->display_options['fields']['field_strategic_plan_thisweek']['table'] = 'field_data_field_strategic_plan_thisweek';
  $handler->display->display_options['fields']['field_strategic_plan_thisweek']['field'] = 'field_strategic_plan_thisweek';
  /* Field: Content: Identify/Select EBPs */
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['id'] = 'field_identify_ebps_thisweek';
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['table'] = 'field_data_field_identify_ebps_thisweek';
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['field'] = 'field_identify_ebps_thisweek';
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['label'] = 'Identify/Select EBPs ';
  /* Field: Content: Prevention Best Practices */
  $handler->display->display_options['fields']['field_prevention_best_thisweek']['id'] = 'field_prevention_best_thisweek';
  $handler->display->display_options['fields']['field_prevention_best_thisweek']['table'] = 'field_data_field_prevention_best_thisweek';
  $handler->display->display_options['fields']['field_prevention_best_thisweek']['field'] = 'field_prevention_best_thisweek';
  /* Field: Content: Other Step 3 Topic */
  $handler->display->display_options['fields']['field_other_step_3_thisweek']['id'] = 'field_other_step_3_thisweek';
  $handler->display->display_options['fields']['field_other_step_3_thisweek']['table'] = 'field_data_field_other_step_3_thisweek';
  $handler->display->display_options['fields']['field_other_step_3_thisweek']['field'] = 'field_other_step_3_thisweek';
  /* Field: Content: Strategy Implementation */
  $handler->display->display_options['fields']['field_strategy_impl_thisweek']['id'] = 'field_strategy_impl_thisweek';
  $handler->display->display_options['fields']['field_strategy_impl_thisweek']['table'] = 'field_data_field_strategy_impl_thisweek';
  $handler->display->display_options['fields']['field_strategy_impl_thisweek']['field'] = 'field_strategy_impl_thisweek';
  /* Field: Content: Youth Development */
  $handler->display->display_options['fields']['field_youth_development_thisweek']['id'] = 'field_youth_development_thisweek';
  $handler->display->display_options['fields']['field_youth_development_thisweek']['table'] = 'field_data_field_youth_development_thisweek';
  $handler->display->display_options['fields']['field_youth_development_thisweek']['field'] = 'field_youth_development_thisweek';
  /* Field: Content: Social Marketing */
  $handler->display->display_options['fields']['field_social_marketing_thisweek']['id'] = 'field_social_marketing_thisweek';
  $handler->display->display_options['fields']['field_social_marketing_thisweek']['table'] = 'field_data_field_social_marketing_thisweek';
  $handler->display->display_options['fields']['field_social_marketing_thisweek']['field'] = 'field_social_marketing_thisweek';
  /* Field: Content: Social Norms Marketing */
  $handler->display->display_options['fields']['field_social_norms_marketing_thi']['id'] = 'field_social_norms_marketing_thi';
  $handler->display->display_options['fields']['field_social_norms_marketing_thi']['table'] = 'field_data_field_social_norms_marketing_thi';
  $handler->display->display_options['fields']['field_social_norms_marketing_thi']['field'] = 'field_social_norms_marketing_thi';
  /* Field: Content: Enforcement */
  $handler->display->display_options['fields']['field_enforcement_this_week']['id'] = 'field_enforcement_this_week';
  $handler->display->display_options['fields']['field_enforcement_this_week']['table'] = 'field_data_field_enforcement_this_week';
  $handler->display->display_options['fields']['field_enforcement_this_week']['field'] = 'field_enforcement_this_week';
  /* Field: Content: Access (Social and Retail) */
  $handler->display->display_options['fields']['field_access_social_thisweek']['id'] = 'field_access_social_thisweek';
  $handler->display->display_options['fields']['field_access_social_thisweek']['table'] = 'field_data_field_access_social_thisweek';
  $handler->display->display_options['fields']['field_access_social_thisweek']['field'] = 'field_access_social_thisweek';
  /* Field: Content: Policy */
  $handler->display->display_options['fields']['field_policy_thisweek']['id'] = 'field_policy_thisweek';
  $handler->display->display_options['fields']['field_policy_thisweek']['table'] = 'field_data_field_policy_thisweek';
  $handler->display->display_options['fields']['field_policy_thisweek']['field'] = 'field_policy_thisweek';
  /* Field: Content: Working with Parents */
  $handler->display->display_options['fields']['field_working_w_parents_thisweek']['id'] = 'field_working_w_parents_thisweek';
  $handler->display->display_options['fields']['field_working_w_parents_thisweek']['table'] = 'field_data_field_working_w_parents_thisweek';
  $handler->display->display_options['fields']['field_working_w_parents_thisweek']['field'] = 'field_working_w_parents_thisweek';
  /* Field: Content: Other Step 4 Topic */
  $handler->display->display_options['fields']['field_other_step_4_thisweek']['id'] = 'field_other_step_4_thisweek';
  $handler->display->display_options['fields']['field_other_step_4_thisweek']['table'] = 'field_data_field_other_step_4_thisweek';
  $handler->display->display_options['fields']['field_other_step_4_thisweek']['field'] = 'field_other_step_4_thisweek';
  /* Field: Content: Evaluation */
  $handler->display->display_options['fields']['field_evaluation_thisweek']['id'] = 'field_evaluation_thisweek';
  $handler->display->display_options['fields']['field_evaluation_thisweek']['table'] = 'field_data_field_evaluation_thisweek';
  $handler->display->display_options['fields']['field_evaluation_thisweek']['field'] = 'field_evaluation_thisweek';
  /* Field: Content: Other Step 5 Topic */
  $handler->display->display_options['fields']['field_other_step_5_thisweek']['id'] = 'field_other_step_5_thisweek';
  $handler->display->display_options['fields']['field_other_step_5_thisweek']['table'] = 'field_data_field_other_step_5_thisweek';
  $handler->display->display_options['fields']['field_other_step_5_thisweek']['field'] = 'field_other_step_5_thisweek';
  /* Field: Content: Sustainability */
  $handler->display->display_options['fields']['field_sustainability_thisweek']['id'] = 'field_sustainability_thisweek';
  $handler->display->display_options['fields']['field_sustainability_thisweek']['table'] = 'field_data_field_sustainability_thisweek';
  $handler->display->display_options['fields']['field_sustainability_thisweek']['field'] = 'field_sustainability_thisweek';
  /* Field: Content: Cultural Competence */
  $handler->display->display_options['fields']['field_cultural_comp_thisweek']['id'] = 'field_cultural_comp_thisweek';
  $handler->display->display_options['fields']['field_cultural_comp_thisweek']['table'] = 'field_data_field_cultural_comp_thisweek';
  $handler->display->display_options['fields']['field_cultural_comp_thisweek']['field'] = 'field_cultural_comp_thisweek';
  /* Field: Content: Other Cross-SPF Topic */
  $handler->display->display_options['fields']['field_other_cross_spf_this']['id'] = 'field_other_cross_spf_this';
  $handler->display->display_options['fields']['field_other_cross_spf_this']['table'] = 'field_data_field_other_cross_spf_this';
  $handler->display->display_options['fields']['field_other_cross_spf_this']['field'] = 'field_other_cross_spf_this';
  $handler->display->display_options['path'] = 'reports/events/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => '0',
    'page_1' => '0',
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: Export - Weekly Reports */
  $handler = $view->new_display('views_data_export', 'Export - Weekly Reports', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Weekly Reports';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['filename'] = 'weekly-reports-export.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = 'Date for the Report';
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_1']['delta_offset'] = '0';
  /* Field: Content: TA Lead */
  $handler->display->display_options['fields']['field_who_provided_services']['id'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['field'] = 'field_who_provided_services';
  $handler->display->display_options['fields']['field_who_provided_services']['label'] = 'Who Provided Services';
  $handler->display->display_options['fields']['field_who_provided_services']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_provided_services']['delta_offset'] = '0';
  /* Field: Content: People Present */
  $handler->display->display_options['fields']['field_who_was_present']['id'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['table'] = 'field_data_field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['field'] = 'field_who_was_present';
  $handler->display->display_options['fields']['field_who_was_present']['label'] = 'Who Was Present';
  $handler->display->display_options['fields']['field_who_was_present']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_who_was_present']['delta_offset'] = '0';
  /* Field: Content: Other People Who Were There */
  $handler->display->display_options['fields']['field_other_people']['id'] = 'field_other_people';
  $handler->display->display_options['fields']['field_other_people']['table'] = 'field_data_field_other_people';
  $handler->display->display_options['fields']['field_other_people']['field'] = 'field_other_people';
  $handler->display->display_options['fields']['field_other_people']['delta_offset'] = '0';
  /* Field: Content: Program(s) Present */
  $handler->display->display_options['fields']['field_program_ref']['id'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['table'] = 'field_data_field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['field'] = 'field_program_ref';
  $handler->display->display_options['fields']['field_program_ref']['label'] = 'Which Program was Present';
  $handler->display->display_options['fields']['field_program_ref']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_program_ref']['delta_offset'] = '0';
  /* Field: Content: Number of People Served */
  $handler->display->display_options['fields']['field_num_people']['id'] = 'field_num_people';
  $handler->display->display_options['fields']['field_num_people']['table'] = 'field_data_field_num_people';
  $handler->display->display_options['fields']['field_num_people']['field'] = 'field_num_people';
  $handler->display->display_options['fields']['field_num_people']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => '1',
  );
  $handler->display->display_options['fields']['field_num_people']['delta_offset'] = '0';
  /* Field: Content: Event Duration (in hours) */
  $handler->display->display_options['fields']['field_num_hours']['id'] = 'field_num_hours';
  $handler->display->display_options['fields']['field_num_hours']['table'] = 'field_data_field_num_hours';
  $handler->display->display_options['fields']['field_num_hours']['field'] = 'field_num_hours';
  $handler->display->display_options['fields']['field_num_hours']['label'] = 'Total Number of Hours of Assistance';
  $handler->display->display_options['fields']['field_num_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => '1',
  );
  $handler->display->display_options['fields']['field_num_hours']['delta_offset'] = '0';
  /* Field: Content: Please describe the event */
  $handler->display->display_options['fields']['field_ta_description']['id'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['table'] = 'field_data_field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['field'] = 'field_ta_description';
  $handler->display->display_options['fields']['field_ta_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_ta_description']['delta_offset'] = '0';
  /* Field: Content: Please list any emerging issues */
  $handler->display->display_options['fields']['field_emerging_issues']['id'] = 'field_emerging_issues';
  $handler->display->display_options['fields']['field_emerging_issues']['table'] = 'field_data_field_emerging_issues';
  $handler->display->display_options['fields']['field_emerging_issues']['field'] = 'field_emerging_issues';
  $handler->display->display_options['fields']['field_emerging_issues']['label'] = 'Please list any emerging issues identified this week';
  $handler->display->display_options['fields']['field_emerging_issues']['delta_offset'] = '0';
  /* Field: Content: In Person */
  $handler->display->display_options['fields']['field_in_person']['id'] = 'field_in_person';
  $handler->display->display_options['fields']['field_in_person']['table'] = 'field_data_field_in_person';
  $handler->display->display_options['fields']['field_in_person']['field'] = 'field_in_person';
  $handler->display->display_options['fields']['field_in_person']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: In Person (Consultant) */
  $handler->display->display_options['fields']['field_in_person_consultant']['id'] = 'field_in_person_consultant';
  $handler->display->display_options['fields']['field_in_person_consultant']['table'] = 'field_data_field_in_person_consultant';
  $handler->display->display_options['fields']['field_in_person_consultant']['field'] = 'field_in_person_consultant';
  $handler->display->display_options['fields']['field_in_person_consultant']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Prep / Planning Time */
  $handler->display->display_options['fields']['field_prep_planning_time']['id'] = 'field_prep_planning_time';
  $handler->display->display_options['fields']['field_prep_planning_time']['table'] = 'field_data_field_prep_planning_time';
  $handler->display->display_options['fields']['field_prep_planning_time']['field'] = 'field_prep_planning_time';
  $handler->display->display_options['fields']['field_prep_planning_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Prep / Planning Time  (Consultant) */
  $handler->display->display_options['fields']['field_prep_planning_time_consult']['id'] = 'field_prep_planning_time_consult';
  $handler->display->display_options['fields']['field_prep_planning_time_consult']['table'] = 'field_data_field_prep_planning_time_consult';
  $handler->display->display_options['fields']['field_prep_planning_time_consult']['field'] = 'field_prep_planning_time_consult';
  $handler->display->display_options['fields']['field_prep_planning_time_consult']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Remote */
  $handler->display->display_options['fields']['field_remote']['id'] = 'field_remote';
  $handler->display->display_options['fields']['field_remote']['table'] = 'field_data_field_remote';
  $handler->display->display_options['fields']['field_remote']['field'] = 'field_remote';
  $handler->display->display_options['fields']['field_remote']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Remote (Consultant) */
  $handler->display->display_options['fields']['field_remote_consultant']['id'] = 'field_remote_consultant';
  $handler->display->display_options['fields']['field_remote_consultant']['table'] = 'field_data_field_remote_consultant';
  $handler->display->display_options['fields']['field_remote_consultant']['field'] = 'field_remote_consultant';
  $handler->display->display_options['fields']['field_remote_consultant']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Travel Time */
  $handler->display->display_options['fields']['field_travel_time']['id'] = 'field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['table'] = 'field_data_field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['field'] = 'field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Travel Time (Consultant) */
  $handler->display->display_options['fields']['field_travel_time_consultant']['id'] = 'field_travel_time_consultant';
  $handler->display->display_options['fields']['field_travel_time_consultant']['table'] = 'field_data_field_travel_time_consultant';
  $handler->display->display_options['fields']['field_travel_time_consultant']['field'] = 'field_travel_time_consultant';
  $handler->display->display_options['fields']['field_travel_time_consultant']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Non-geographic Population Addressed */
  $handler->display->display_options['fields']['field_non_geographic_population_']['id'] = 'field_non_geographic_population_';
  $handler->display->display_options['fields']['field_non_geographic_population_']['table'] = 'field_data_field_non_geographic_population_';
  $handler->display->display_options['fields']['field_non_geographic_population_']['field'] = 'field_non_geographic_population_';
  $handler->display->display_options['fields']['field_non_geographic_population_']['delta_offset'] = '0';
  /* Field: Content: Utilizing Epidemiological Data */
  $handler->display->display_options['fields']['field_utilizing_epid_thisweek']['id'] = 'field_utilizing_epid_thisweek';
  $handler->display->display_options['fields']['field_utilizing_epid_thisweek']['table'] = 'field_data_field_utilizing_epid_thisweek';
  $handler->display->display_options['fields']['field_utilizing_epid_thisweek']['field'] = 'field_utilizing_epid_thisweek';
  $handler->display->display_options['fields']['field_utilizing_epid_thisweek']['label'] = 'Utilizing Epidemiological Data - This Week';
  /* Field: Content: Utilizing Epidemiological Data - Continued */
  $handler->display->display_options['fields']['field_utilizing_epid_continued']['id'] = 'field_utilizing_epid_continued';
  $handler->display->display_options['fields']['field_utilizing_epid_continued']['table'] = 'field_data_field_utilizing_epid_continued';
  $handler->display->display_options['fields']['field_utilizing_epid_continued']['field'] = 'field_utilizing_epid_continued';
  /* Field: Content: Needs Assessment - Continued */
  $handler->display->display_options['fields']['field_needs_assessment_continued']['id'] = 'field_needs_assessment_continued';
  $handler->display->display_options['fields']['field_needs_assessment_continued']['table'] = 'field_data_field_needs_assessment_continued';
  $handler->display->display_options['fields']['field_needs_assessment_continued']['field'] = 'field_needs_assessment_continued';
  /* Field: Content: Needs Assessment */
  $handler->display->display_options['fields']['field_needs_assessment_thisweek']['id'] = 'field_needs_assessment_thisweek';
  $handler->display->display_options['fields']['field_needs_assessment_thisweek']['table'] = 'field_data_field_needs_assessment_thisweek';
  $handler->display->display_options['fields']['field_needs_assessment_thisweek']['field'] = 'field_needs_assessment_thisweek';
  $handler->display->display_options['fields']['field_needs_assessment_thisweek']['label'] = 'Needs Assessment - This Week';
  /* Field: Content: Risk and Protective Factors - Continued */
  $handler->display->display_options['fields']['field_risk_protective_continued']['id'] = 'field_risk_protective_continued';
  $handler->display->display_options['fields']['field_risk_protective_continued']['table'] = 'field_data_field_risk_protective_continued';
  $handler->display->display_options['fields']['field_risk_protective_continued']['field'] = 'field_risk_protective_continued';
  /* Field: Content: Risk and Protective Factors */
  $handler->display->display_options['fields']['field_risk_protective_thisweek']['id'] = 'field_risk_protective_thisweek';
  $handler->display->display_options['fields']['field_risk_protective_thisweek']['table'] = 'field_data_field_risk_protective_thisweek';
  $handler->display->display_options['fields']['field_risk_protective_thisweek']['field'] = 'field_risk_protective_thisweek';
  $handler->display->display_options['fields']['field_risk_protective_thisweek']['label'] = 'Risk and Protective Factors - This Week';
  /* Field: Content: Resource Assessment - Continued */
  $handler->display->display_options['fields']['field_resource_assess_continued']['id'] = 'field_resource_assess_continued';
  $handler->display->display_options['fields']['field_resource_assess_continued']['table'] = 'field_data_field_resource_assess_continued';
  $handler->display->display_options['fields']['field_resource_assess_continued']['field'] = 'field_resource_assess_continued';
  /* Field: Content: Resource Assessment */
  $handler->display->display_options['fields']['field_resource_assess_thisweek']['id'] = 'field_resource_assess_thisweek';
  $handler->display->display_options['fields']['field_resource_assess_thisweek']['table'] = 'field_data_field_resource_assess_thisweek';
  $handler->display->display_options['fields']['field_resource_assess_thisweek']['field'] = 'field_resource_assess_thisweek';
  $handler->display->display_options['fields']['field_resource_assess_thisweek']['label'] = 'Resource Assessment - This Week';
  /* Field: Content: Other Step 1 Topic - Continued */
  $handler->display->display_options['fields']['field_other_step_1_continued']['id'] = 'field_other_step_1_continued';
  $handler->display->display_options['fields']['field_other_step_1_continued']['table'] = 'field_data_field_other_step_1_continued';
  $handler->display->display_options['fields']['field_other_step_1_continued']['field'] = 'field_other_step_1_continued';
  /* Field: Content: Other Step 1 Topic */
  $handler->display->display_options['fields']['field_other_step_1_topic']['id'] = 'field_other_step_1_topic';
  $handler->display->display_options['fields']['field_other_step_1_topic']['table'] = 'field_data_field_other_step_1_topic';
  $handler->display->display_options['fields']['field_other_step_1_topic']['field'] = 'field_other_step_1_topic';
  $handler->display->display_options['fields']['field_other_step_1_topic']['label'] = 'Other Step 1 Topic - This Week';
  /* Field: Content: Grant Management - Continued */
  $handler->display->display_options['fields']['field_grant_management_continued']['id'] = 'field_grant_management_continued';
  $handler->display->display_options['fields']['field_grant_management_continued']['table'] = 'field_data_field_grant_management_continued';
  $handler->display->display_options['fields']['field_grant_management_continued']['field'] = 'field_grant_management_continued';
  /* Field: Content: Grant Management */
  $handler->display->display_options['fields']['field_grant_management_this_week']['id'] = 'field_grant_management_this_week';
  $handler->display->display_options['fields']['field_grant_management_this_week']['table'] = 'field_data_field_grant_management_this_week';
  $handler->display->display_options['fields']['field_grant_management_this_week']['field'] = 'field_grant_management_this_week';
  $handler->display->display_options['fields']['field_grant_management_this_week']['label'] = 'Grant Management - This Week';
  /* Field: Content: Mentoring Other Programs - Continued */
  $handler->display->display_options['fields']['field_mentoring_other_continued']['id'] = 'field_mentoring_other_continued';
  $handler->display->display_options['fields']['field_mentoring_other_continued']['table'] = 'field_data_field_mentoring_other_continued';
  $handler->display->display_options['fields']['field_mentoring_other_continued']['field'] = 'field_mentoring_other_continued';
  /* Field: Content: Mentoring Other Programs */
  $handler->display->display_options['fields']['field_mentoring_other_thisweek']['id'] = 'field_mentoring_other_thisweek';
  $handler->display->display_options['fields']['field_mentoring_other_thisweek']['table'] = 'field_data_field_mentoring_other_thisweek';
  $handler->display->display_options['fields']['field_mentoring_other_thisweek']['field'] = 'field_mentoring_other_thisweek';
  $handler->display->display_options['fields']['field_mentoring_other_thisweek']['label'] = 'Mentoring Other Programs - This Week';
  /* Field: Content: Organizational Development - Continued */
  $handler->display->display_options['fields']['field_organizational_dv_continue']['id'] = 'field_organizational_dv_continue';
  $handler->display->display_options['fields']['field_organizational_dv_continue']['table'] = 'field_data_field_organizational_dv_continue';
  $handler->display->display_options['fields']['field_organizational_dv_continue']['field'] = 'field_organizational_dv_continue';
  /* Field: Content: Organizational Development */
  $handler->display->display_options['fields']['field_organizational_dv_thisweek']['id'] = 'field_organizational_dv_thisweek';
  $handler->display->display_options['fields']['field_organizational_dv_thisweek']['table'] = 'field_data_field_organizational_dv_thisweek';
  $handler->display->display_options['fields']['field_organizational_dv_thisweek']['field'] = 'field_organizational_dv_thisweek';
  $handler->display->display_options['fields']['field_organizational_dv_thisweek']['label'] = 'Organizational Development - This Week';
  /* Field: Content: Other Step 2 Topic - Continued */
  $handler->display->display_options['fields']['field_other_step_2_continued']['id'] = 'field_other_step_2_continued';
  $handler->display->display_options['fields']['field_other_step_2_continued']['table'] = 'field_data_field_other_step_2_continued';
  $handler->display->display_options['fields']['field_other_step_2_continued']['field'] = 'field_other_step_2_continued';
  /* Field: Content: Other Step 2 Topic */
  $handler->display->display_options['fields']['field_other_step_2_thisweek']['id'] = 'field_other_step_2_thisweek';
  $handler->display->display_options['fields']['field_other_step_2_thisweek']['table'] = 'field_data_field_other_step_2_thisweek';
  $handler->display->display_options['fields']['field_other_step_2_thisweek']['field'] = 'field_other_step_2_thisweek';
  $handler->display->display_options['fields']['field_other_step_2_thisweek']['label'] = 'Other Step 2 Topic - This Week';
  /* Field: Content: Partnership/Coalition Building - Continued */
  $handler->display->display_options['fields']['field_partnership_coal_continued']['id'] = 'field_partnership_coal_continued';
  $handler->display->display_options['fields']['field_partnership_coal_continued']['table'] = 'field_data_field_partnership_coal_continued';
  $handler->display->display_options['fields']['field_partnership_coal_continued']['field'] = 'field_partnership_coal_continued';
  /* Field: Content: Partnership/Coalition Building */
  $handler->display->display_options['fields']['field_partnership_coal_thisweek']['id'] = 'field_partnership_coal_thisweek';
  $handler->display->display_options['fields']['field_partnership_coal_thisweek']['table'] = 'field_data_field_partnership_coal_thisweek';
  $handler->display->display_options['fields']['field_partnership_coal_thisweek']['field'] = 'field_partnership_coal_thisweek';
  $handler->display->display_options['fields']['field_partnership_coal_thisweek']['label'] = 'Partnership/Coalition Building - This Week';
  /* Field: Content: Identify/Select EBPs - Continued */
  $handler->display->display_options['fields']['field_identify_ebps_continued']['id'] = 'field_identify_ebps_continued';
  $handler->display->display_options['fields']['field_identify_ebps_continued']['table'] = 'field_data_field_identify_ebps_continued';
  $handler->display->display_options['fields']['field_identify_ebps_continued']['field'] = 'field_identify_ebps_continued';
  /* Field: Content: Identify/Select EBPs */
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['id'] = 'field_identify_ebps_thisweek';
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['table'] = 'field_data_field_identify_ebps_thisweek';
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['field'] = 'field_identify_ebps_thisweek';
  $handler->display->display_options['fields']['field_identify_ebps_thisweek']['label'] = 'Identify/Select EBPs - This Week ';
  /* Field: Content: Strategic Planning - Continued */
  $handler->display->display_options['fields']['field_strategic_plan_continued']['id'] = 'field_strategic_plan_continued';
  $handler->display->display_options['fields']['field_strategic_plan_continued']['table'] = 'field_data_field_strategic_plan_continued';
  $handler->display->display_options['fields']['field_strategic_plan_continued']['field'] = 'field_strategic_plan_continued';
  /* Field: Content: Strategic Planning */
  $handler->display->display_options['fields']['field_strategic_plan_thisweek']['id'] = 'field_strategic_plan_thisweek';
  $handler->display->display_options['fields']['field_strategic_plan_thisweek']['table'] = 'field_data_field_strategic_plan_thisweek';
  $handler->display->display_options['fields']['field_strategic_plan_thisweek']['field'] = 'field_strategic_plan_thisweek';
  $handler->display->display_options['fields']['field_strategic_plan_thisweek']['label'] = 'Strategic Planning - This Week';
  /* Field: Content: Prevention Best Practices - Continued */
  $handler->display->display_options['fields']['field_prevention_best_continued']['id'] = 'field_prevention_best_continued';
  $handler->display->display_options['fields']['field_prevention_best_continued']['table'] = 'field_data_field_prevention_best_continued';
  $handler->display->display_options['fields']['field_prevention_best_continued']['field'] = 'field_prevention_best_continued';
  /* Field: Content: Prevention Best Practices */
  $handler->display->display_options['fields']['field_prevention_best_thisweek']['id'] = 'field_prevention_best_thisweek';
  $handler->display->display_options['fields']['field_prevention_best_thisweek']['table'] = 'field_data_field_prevention_best_thisweek';
  $handler->display->display_options['fields']['field_prevention_best_thisweek']['field'] = 'field_prevention_best_thisweek';
  $handler->display->display_options['fields']['field_prevention_best_thisweek']['label'] = 'Prevention Best Practices - This Week';
  /* Field: Content: Other Step 3 Topic - Continued */
  $handler->display->display_options['fields']['field_other_step_3_continued']['id'] = 'field_other_step_3_continued';
  $handler->display->display_options['fields']['field_other_step_3_continued']['table'] = 'field_data_field_other_step_3_continued';
  $handler->display->display_options['fields']['field_other_step_3_continued']['field'] = 'field_other_step_3_continued';
  /* Field: Content: Other Step 3 Topic */
  $handler->display->display_options['fields']['field_other_step_3_thisweek']['id'] = 'field_other_step_3_thisweek';
  $handler->display->display_options['fields']['field_other_step_3_thisweek']['table'] = 'field_data_field_other_step_3_thisweek';
  $handler->display->display_options['fields']['field_other_step_3_thisweek']['field'] = 'field_other_step_3_thisweek';
  $handler->display->display_options['fields']['field_other_step_3_thisweek']['label'] = 'Other Step 3 Topic - This Week';
  /* Field: Content: Social Marketing - Continued */
  $handler->display->display_options['fields']['field_social_marketing_continued']['id'] = 'field_social_marketing_continued';
  $handler->display->display_options['fields']['field_social_marketing_continued']['table'] = 'field_data_field_social_marketing_continued';
  $handler->display->display_options['fields']['field_social_marketing_continued']['field'] = 'field_social_marketing_continued';
  /* Field: Content: Social Marketing */
  $handler->display->display_options['fields']['field_social_marketing_thisweek']['id'] = 'field_social_marketing_thisweek';
  $handler->display->display_options['fields']['field_social_marketing_thisweek']['table'] = 'field_data_field_social_marketing_thisweek';
  $handler->display->display_options['fields']['field_social_marketing_thisweek']['field'] = 'field_social_marketing_thisweek';
  $handler->display->display_options['fields']['field_social_marketing_thisweek']['label'] = 'Social Marketing - This Week';
  /* Field: Content: Social Norms Marketing - Continued */
  $handler->display->display_options['fields']['field_social_norms_marketing_con']['id'] = 'field_social_norms_marketing_con';
  $handler->display->display_options['fields']['field_social_norms_marketing_con']['table'] = 'field_data_field_social_norms_marketing_con';
  $handler->display->display_options['fields']['field_social_norms_marketing_con']['field'] = 'field_social_norms_marketing_con';
  /* Field: Content: Social Norms Marketing */
  $handler->display->display_options['fields']['field_social_norms_marketing_thi']['id'] = 'field_social_norms_marketing_thi';
  $handler->display->display_options['fields']['field_social_norms_marketing_thi']['table'] = 'field_data_field_social_norms_marketing_thi';
  $handler->display->display_options['fields']['field_social_norms_marketing_thi']['field'] = 'field_social_norms_marketing_thi';
  $handler->display->display_options['fields']['field_social_norms_marketing_thi']['label'] = 'Social Norms Marketing - This Week';
  /* Field: Content: Strategy Implementation - Continued */
  $handler->display->display_options['fields']['field_strategy_impl_continued']['id'] = 'field_strategy_impl_continued';
  $handler->display->display_options['fields']['field_strategy_impl_continued']['table'] = 'field_data_field_strategy_impl_continued';
  $handler->display->display_options['fields']['field_strategy_impl_continued']['field'] = 'field_strategy_impl_continued';
  /* Field: Content: Strategy Implementation */
  $handler->display->display_options['fields']['field_strategy_impl_thisweek']['id'] = 'field_strategy_impl_thisweek';
  $handler->display->display_options['fields']['field_strategy_impl_thisweek']['table'] = 'field_data_field_strategy_impl_thisweek';
  $handler->display->display_options['fields']['field_strategy_impl_thisweek']['field'] = 'field_strategy_impl_thisweek';
  $handler->display->display_options['fields']['field_strategy_impl_thisweek']['label'] = 'Strategy Implementation - This Week';
  /* Field: Content: Youth Development - Continued */
  $handler->display->display_options['fields']['field_youth_development_continue']['id'] = 'field_youth_development_continue';
  $handler->display->display_options['fields']['field_youth_development_continue']['table'] = 'field_data_field_youth_development_continue';
  $handler->display->display_options['fields']['field_youth_development_continue']['field'] = 'field_youth_development_continue';
  /* Field: Content: Youth Development */
  $handler->display->display_options['fields']['field_youth_development_thisweek']['id'] = 'field_youth_development_thisweek';
  $handler->display->display_options['fields']['field_youth_development_thisweek']['table'] = 'field_data_field_youth_development_thisweek';
  $handler->display->display_options['fields']['field_youth_development_thisweek']['field'] = 'field_youth_development_thisweek';
  $handler->display->display_options['fields']['field_youth_development_thisweek']['label'] = 'Youth Development - This Week';
  /* Field: Content: Access (Social and Retail) - Continued */
  $handler->display->display_options['fields']['field_access_social_continued']['id'] = 'field_access_social_continued';
  $handler->display->display_options['fields']['field_access_social_continued']['table'] = 'field_data_field_access_social_continued';
  $handler->display->display_options['fields']['field_access_social_continued']['field'] = 'field_access_social_continued';
  /* Field: Content: Access (Social and Retail) */
  $handler->display->display_options['fields']['field_access_social_thisweek']['id'] = 'field_access_social_thisweek';
  $handler->display->display_options['fields']['field_access_social_thisweek']['table'] = 'field_data_field_access_social_thisweek';
  $handler->display->display_options['fields']['field_access_social_thisweek']['field'] = 'field_access_social_thisweek';
  $handler->display->display_options['fields']['field_access_social_thisweek']['label'] = 'Access (Social and Retail) - This Week';
  /* Field: Content: Enforcement - Continued */
  $handler->display->display_options['fields']['field_enforcement_continued']['id'] = 'field_enforcement_continued';
  $handler->display->display_options['fields']['field_enforcement_continued']['table'] = 'field_data_field_enforcement_continued';
  $handler->display->display_options['fields']['field_enforcement_continued']['field'] = 'field_enforcement_continued';
  /* Field: Content: Enforcement */
  $handler->display->display_options['fields']['field_enforcement_this_week']['id'] = 'field_enforcement_this_week';
  $handler->display->display_options['fields']['field_enforcement_this_week']['table'] = 'field_data_field_enforcement_this_week';
  $handler->display->display_options['fields']['field_enforcement_this_week']['field'] = 'field_enforcement_this_week';
  $handler->display->display_options['fields']['field_enforcement_this_week']['label'] = 'Enforcement - This Week';
  /* Field: Content: Policy - Continued */
  $handler->display->display_options['fields']['field_policy_continued']['id'] = 'field_policy_continued';
  $handler->display->display_options['fields']['field_policy_continued']['table'] = 'field_data_field_policy_continued';
  $handler->display->display_options['fields']['field_policy_continued']['field'] = 'field_policy_continued';
  /* Field: Content: Policy */
  $handler->display->display_options['fields']['field_policy_thisweek']['id'] = 'field_policy_thisweek';
  $handler->display->display_options['fields']['field_policy_thisweek']['table'] = 'field_data_field_policy_thisweek';
  $handler->display->display_options['fields']['field_policy_thisweek']['field'] = 'field_policy_thisweek';
  $handler->display->display_options['fields']['field_policy_thisweek']['label'] = 'Policy - This Week';
  /* Field: Content: Working with Parents - Continued */
  $handler->display->display_options['fields']['field_working_w_parents_continue']['id'] = 'field_working_w_parents_continue';
  $handler->display->display_options['fields']['field_working_w_parents_continue']['table'] = 'field_data_field_working_w_parents_continue';
  $handler->display->display_options['fields']['field_working_w_parents_continue']['field'] = 'field_working_w_parents_continue';
  /* Field: Content: Working with Parents */
  $handler->display->display_options['fields']['field_working_w_parents_thisweek']['id'] = 'field_working_w_parents_thisweek';
  $handler->display->display_options['fields']['field_working_w_parents_thisweek']['table'] = 'field_data_field_working_w_parents_thisweek';
  $handler->display->display_options['fields']['field_working_w_parents_thisweek']['field'] = 'field_working_w_parents_thisweek';
  $handler->display->display_options['fields']['field_working_w_parents_thisweek']['label'] = 'Working with Parents - This Week';
  /* Field: Content: Other Step 4 Topic - Continued */
  $handler->display->display_options['fields']['field_other_step_4_continued']['id'] = 'field_other_step_4_continued';
  $handler->display->display_options['fields']['field_other_step_4_continued']['table'] = 'field_data_field_other_step_4_continued';
  $handler->display->display_options['fields']['field_other_step_4_continued']['field'] = 'field_other_step_4_continued';
  /* Field: Content: Other Step 4 Topic */
  $handler->display->display_options['fields']['field_other_step_4_thisweek']['id'] = 'field_other_step_4_thisweek';
  $handler->display->display_options['fields']['field_other_step_4_thisweek']['table'] = 'field_data_field_other_step_4_thisweek';
  $handler->display->display_options['fields']['field_other_step_4_thisweek']['field'] = 'field_other_step_4_thisweek';
  $handler->display->display_options['fields']['field_other_step_4_thisweek']['label'] = 'Other Step 4 Topic - This Week';
  /* Field: Content: Evaluation - Continued */
  $handler->display->display_options['fields']['field_evaluation_continued']['id'] = 'field_evaluation_continued';
  $handler->display->display_options['fields']['field_evaluation_continued']['table'] = 'field_data_field_evaluation_continued';
  $handler->display->display_options['fields']['field_evaluation_continued']['field'] = 'field_evaluation_continued';
  /* Field: Content: Evaluation */
  $handler->display->display_options['fields']['field_evaluation_thisweek']['id'] = 'field_evaluation_thisweek';
  $handler->display->display_options['fields']['field_evaluation_thisweek']['table'] = 'field_data_field_evaluation_thisweek';
  $handler->display->display_options['fields']['field_evaluation_thisweek']['field'] = 'field_evaluation_thisweek';
  $handler->display->display_options['fields']['field_evaluation_thisweek']['label'] = 'Evaluation - This Week';
  /* Field: Content: Other Step 5 Topic - Continued */
  $handler->display->display_options['fields']['field_other_step_5_continued']['id'] = 'field_other_step_5_continued';
  $handler->display->display_options['fields']['field_other_step_5_continued']['table'] = 'field_data_field_other_step_5_continued';
  $handler->display->display_options['fields']['field_other_step_5_continued']['field'] = 'field_other_step_5_continued';
  /* Field: Content: Other Step 5 Topic */
  $handler->display->display_options['fields']['field_other_step_5_thisweek']['id'] = 'field_other_step_5_thisweek';
  $handler->display->display_options['fields']['field_other_step_5_thisweek']['table'] = 'field_data_field_other_step_5_thisweek';
  $handler->display->display_options['fields']['field_other_step_5_thisweek']['field'] = 'field_other_step_5_thisweek';
  $handler->display->display_options['fields']['field_other_step_5_thisweek']['label'] = 'Other Step 5 Topic - This Week';
  /* Field: Content: Sustainability - Continued */
  $handler->display->display_options['fields']['field_sustainability_continued']['id'] = 'field_sustainability_continued';
  $handler->display->display_options['fields']['field_sustainability_continued']['table'] = 'field_data_field_sustainability_continued';
  $handler->display->display_options['fields']['field_sustainability_continued']['field'] = 'field_sustainability_continued';
  /* Field: Content: Sustainability */
  $handler->display->display_options['fields']['field_sustainability_thisweek']['id'] = 'field_sustainability_thisweek';
  $handler->display->display_options['fields']['field_sustainability_thisweek']['table'] = 'field_data_field_sustainability_thisweek';
  $handler->display->display_options['fields']['field_sustainability_thisweek']['field'] = 'field_sustainability_thisweek';
  $handler->display->display_options['fields']['field_sustainability_thisweek']['label'] = 'Sustainability - This Week';
  /* Field: Content: Cultural Competence - Continued */
  $handler->display->display_options['fields']['field_cultural_comp_continued']['id'] = 'field_cultural_comp_continued';
  $handler->display->display_options['fields']['field_cultural_comp_continued']['table'] = 'field_data_field_cultural_comp_continued';
  $handler->display->display_options['fields']['field_cultural_comp_continued']['field'] = 'field_cultural_comp_continued';
  /* Field: Content: Cultural Competence */
  $handler->display->display_options['fields']['field_cultural_comp_thisweek']['id'] = 'field_cultural_comp_thisweek';
  $handler->display->display_options['fields']['field_cultural_comp_thisweek']['table'] = 'field_data_field_cultural_comp_thisweek';
  $handler->display->display_options['fields']['field_cultural_comp_thisweek']['field'] = 'field_cultural_comp_thisweek';
  $handler->display->display_options['fields']['field_cultural_comp_thisweek']['label'] = 'Cultural Competence - This Week';
  /* Field: Content: Other Cross-SPF Topic */
  $handler->display->display_options['fields']['field_other_cross_spf_this']['id'] = 'field_other_cross_spf_this';
  $handler->display->display_options['fields']['field_other_cross_spf_this']['table'] = 'field_data_field_other_cross_spf_this';
  $handler->display->display_options['fields']['field_other_cross_spf_this']['field'] = 'field_other_cross_spf_this';
  /* Field: Content: Other Cross-SPF Topic - Continued */
  $handler->display->display_options['fields']['field_other_cross_spf_continued']['id'] = 'field_other_cross_spf_continued';
  $handler->display->display_options['fields']['field_other_cross_spf_continued']['table'] = 'field_data_field_other_cross_spf_continued';
  $handler->display->display_options['fields']['field_other_cross_spf_continued']['field'] = 'field_other_cross_spf_continued';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'weekly_report' => 'weekly_report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['type']['group_info']['remember'] = '0';
  /* Filter criterion: Content: Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'From';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'from';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'To';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'to';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: TA Lead (field_who_provided_services) */
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['id'] = 'field_who_provided_services_target_id';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['table'] = 'field_data_field_who_provided_services';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['field'] = 'field_who_provided_services_target_id';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['operator_id'] = 'field_who_provided_services_target_id_op';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['label'] = 'Who Provided Services';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['operator'] = 'field_who_provided_services_target_id_op';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['identifier'] = 'ta_lead';
  $handler->display->display_options['filters']['field_who_provided_services_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Categories (field_categories) */
  $handler->display->display_options['filters']['field_categories_value']['id'] = 'field_categories_value';
  $handler->display->display_options['filters']['field_categories_value']['table'] = 'field_data_field_categories';
  $handler->display->display_options['filters']['field_categories_value']['field'] = 'field_categories_value';
  $handler->display->display_options['filters']['field_categories_value']['group'] = 1;
  $handler->display->display_options['filters']['field_categories_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categories_value']['expose']['operator_id'] = 'field_categories_value_op';
  $handler->display->display_options['filters']['field_categories_value']['expose']['label'] = 'Categories';
  $handler->display->display_options['filters']['field_categories_value']['expose']['operator'] = 'field_categories_value_op';
  $handler->display->display_options['filters']['field_categories_value']['expose']['identifier'] = 'categories';
  $handler->display->display_options['filters']['field_categories_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_categories_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_categories_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: SPF Steps Done (field_spf_steps_done) */
  $handler->display->display_options['filters']['field_spf_steps_done_value']['id'] = 'field_spf_steps_done_value';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['table'] = 'field_data_field_spf_steps_done';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['field'] = 'field_spf_steps_done_value';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['operator_id'] = 'field_spf_steps_done_value_op';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['label'] = 'SPF Steps Done';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['operator'] = 'field_spf_steps_done_value_op';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['identifier'] = 'spf_steps';
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_spf_steps_done_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_spf_steps_done_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_value']['id'] = 'field_topics_value';
  $handler->display->display_options['filters']['field_topics_value']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_value']['field'] = 'field_topics_value';
  $handler->display->display_options['filters']['field_topics_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_value']['expose']['operator_id'] = 'field_topics_value_op';
  $handler->display->display_options['filters']['field_topics_value']['expose']['label'] = 'Topics';
  $handler->display->display_options['filters']['field_topics_value']['expose']['operator'] = 'field_topics_value_op';
  $handler->display->display_options['filters']['field_topics_value']['expose']['identifier'] = 'topics';
  $handler->display->display_options['filters']['field_topics_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topics_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'reports/weekly-reports/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => '0',
    'page' => '0',
  );
  $handler->display->display_options['sitename_title'] = '0';
  $handler->display->display_options['use_batch'] = 'batch';
  $export['events'] = $view;

  return $export;
}
