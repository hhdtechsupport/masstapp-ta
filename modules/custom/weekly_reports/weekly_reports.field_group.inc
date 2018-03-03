<?php
/**
 * @file
 * weekly_reports.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function weekly_reports_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_continued_topics|node|weekly_report|default';
  $field_group->group_name = 'group_continued_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Continued Topics',
    'weight' => '12',
    'children' => array(
      0 => 'field_utilizing_epid_continued',
      1 => 'field_risk_protective_continued',
      2 => 'field_needs_assessment_continued',
      3 => 'field_resource_assess_continued',
      4 => 'field_other_step_1_continued',
      5 => 'field_grant_management_continued',
      6 => 'field_partnership_coal_continued',
      7 => 'field_organizational_dv_continue',
      8 => 'field_mentoring_other_continued',
      9 => 'field_other_step_2_continued',
      10 => 'field_strategic_plan_continued',
      11 => 'field_identify_ebps_continued',
      12 => 'field_prevention_best_continued',
      13 => 'field_other_step_3_continued',
      14 => 'field_strategy_impl_continued',
      15 => 'field_other_step_4_continued',
      16 => 'field_other_step_5_continued',
      17 => 'field_youth_development_continue',
      18 => 'field_social_marketing_continued',
      19 => 'field_social_norms_marketing_con',
      20 => 'field_enforcement_continued',
      21 => 'field_access_social_continued',
      22 => 'field_policy_continued',
      23 => 'field_working_w_parents_continue',
      24 => 'field_evaluation_continued',
      25 => 'field_sustainability_continued',
      26 => 'field_cultural_comp_continued',
      27 => 'field_other_cross_spf_continued',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-continued-topics field-group-fieldset',
      ),
    ),
  );
  $export['group_continued_topics|node|weekly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_in_person_remote_display|node|weekly_report|default';
  $field_group->group_name = 'group_in_person_remote_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'In Person vs. Remote',
    'weight' => '8',
    'children' => array(
      0 => 'field_prep_planning_time',
      1 => 'field_in_person',
      2 => 'field_remote',
      3 => 'field_travel_time',
      4 => 'field_in_person_consultant',
      5 => 'field_remote_consultant',
      6 => 'field_prep_planning_time_consult',
      7 => 'field_travel_time_consultant',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'In Person vs. Remote',
      'instance_settings' => array(
        'classes' => ' group-in-person-remote-display field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_in_person_remote_display|node|weekly_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_in_person_remote|node|weekly_report|form';
  $field_group->group_name = 'group_in_person_remote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TA Provider / Consultant',
    'weight' => '5',
    'children' => array(
      0 => 'field_prep_planning_time',
      1 => 'field_in_person',
      2 => 'field_remote',
      3 => 'field_travel_time',
      4 => 'field_in_person_consultant',
      5 => 'field_remote_consultant',
      6 => 'field_prep_planning_time_consult',
      7 => 'field_travel_time_consultant',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_in_person_remote|node|weekly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spf_cross|node|weekly_report|form';
  $field_group->group_name = 'group_spf_cross';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cross-SPF Topics',
    'weight' => '14',
    'children' => array(
      0 => 'field_sustainability_thisweek',
      1 => 'field_sustainability_continued',
      2 => 'field_cultural_comp_thisweek',
      3 => 'field_cultural_comp_continued',
      4 => 'field_other_cross_spf_this',
      5 => 'field_other_cross_spf_continued',
      6 => 'field_cultural_competence',
      7 => 'field_other_cross_spf_topic',
      8 => 'field_sustainability',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_spf_cross|node|weekly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spf_step_1|node|weekly_report|form';
  $field_group->group_name = 'group_spf_step_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SPF Step 1 - Assessment',
    'weight' => '9',
    'children' => array(
      0 => 'field_utilizing_epid_continued',
      1 => 'field_utilizing_epid_thisweek',
      2 => 'field_risk_protective_thisweek',
      3 => 'field_risk_protective_continued',
      4 => 'field_needs_assessment_thisweek',
      5 => 'field_needs_assessment_continued',
      6 => 'field_resource_assess_continued',
      7 => 'field_resource_assess_thisweek',
      8 => 'field_other_step_1_topic',
      9 => 'field_other_step_1_continued',
      10 => 'field_needs_assessment',
      11 => 'field_other_step_1',
      12 => 'field_resource_assessment',
      13 => 'field_risk_and_protective',
      14 => 'field_spf_step_1',
      15 => 'field_utilizing_epi_data',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'SPF Step 1 - Assessment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_spf_step_1|node|weekly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spf_step_2|node|weekly_report|form';
  $field_group->group_name = 'group_spf_step_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SPF Step 2 - Capacity Building',
    'weight' => '10',
    'children' => array(
      0 => 'field_grant_management_this_week',
      1 => 'field_grant_management_continued',
      2 => 'field_partnership_coal_thisweek',
      3 => 'field_partnership_coal_continued',
      4 => 'field_organizational_dv_thisweek',
      5 => 'field_organizational_dv_continue',
      6 => 'field_mentoring_other_thisweek',
      7 => 'field_mentoring_other_continued',
      8 => 'field_other_step_2_thisweek',
      9 => 'field_other_step_2_continued',
      10 => 'field_grant_management',
      11 => 'field_mentoring_other_programs',
      12 => 'field_organizational_development',
      13 => 'field_other_step_2_topic',
      14 => 'field_partnership_coal_build',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'SPF Step 2 - Capacity Building',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_spf_step_2|node|weekly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spf_step_3|node|weekly_report|form';
  $field_group->group_name = 'group_spf_step_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SPF Step 3 - Strategic Planning',
    'weight' => '11',
    'children' => array(
      0 => 'field_strategic_plan_thisweek',
      1 => 'field_strategic_plan_continued',
      2 => 'field_identify_ebps_thisweek',
      3 => 'field_identify_ebps_continued',
      4 => 'field_prevention_best_thisweek',
      5 => 'field_prevention_best_continued',
      6 => 'field_other_step_3_thisweek',
      7 => 'field_other_step_3_continued',
      8 => 'field_identify_select_ebps',
      9 => 'field_other_step_3_topic',
      10 => 'field_prevention_best_practices',
      11 => 'field_strategic_planning',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'SPF Step 3 - Strategic Planning',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_spf_step_3|node|weekly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spf_step_4|node|weekly_report|form';
  $field_group->group_name = 'group_spf_step_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SPF Step 4 - Implementation',
    'weight' => '12',
    'children' => array(
      0 => 'field_strategy_impl_thisweek',
      1 => 'field_strategy_impl_continued',
      2 => 'field_other_step_4_thisweek',
      3 => 'field_other_step_4_continued',
      4 => 'field_youth_development_thisweek',
      5 => 'field_youth_development_continue',
      6 => 'field_social_marketing_thisweek',
      7 => 'field_social_marketing_continued',
      8 => 'field_social_norms_marketing_thi',
      9 => 'field_social_norms_marketing_con',
      10 => 'field_enforcement_this_week',
      11 => 'field_enforcement_continued',
      12 => 'field_access_social_thisweek',
      13 => 'field_access_social_continued',
      14 => 'field_policy_thisweek',
      15 => 'field_policy_continued',
      16 => 'field_working_w_parents_thisweek',
      17 => 'field_working_w_parents_continue',
      18 => 'field_access_social_and_retail',
      19 => 'field_enforcement',
      20 => 'field_other_step_4_topic',
      21 => 'field_policy',
      22 => 'field_social_marketing',
      23 => 'field_social_norms_marketing',
      24 => 'field_strategy_implementation',
      25 => 'field_working_with_parents',
      26 => 'field_youth_development',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'SPF Step 4 - Implementation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_spf_step_4|node|weekly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spf_step_5|node|weekly_report|form';
  $field_group->group_name = 'group_spf_step_5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SPF Step 5 - Evaluation',
    'weight' => '13',
    'children' => array(
      0 => 'field_other_step_5_continued',
      1 => 'field_other_step_5_thisweek',
      2 => 'field_evaluation_thisweek',
      3 => 'field_evaluation_continued',
      4 => 'field_evaluation',
      5 => 'field_other_step_5_topic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'SPF Step 5 - Evaluation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_spf_step_5|node|weekly_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_display|node|weekly_report|default';
  $field_group->group_name = 'group_topics_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'weekly_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'New Topics',
    'weight' => '11',
    'children' => array(
      0 => 'field_utilizing_epid_thisweek',
      1 => 'field_risk_protective_thisweek',
      2 => 'field_needs_assessment_thisweek',
      3 => 'field_resource_assess_thisweek',
      4 => 'field_other_step_1_topic',
      5 => 'field_grant_management_this_week',
      6 => 'field_partnership_coal_thisweek',
      7 => 'field_organizational_dv_thisweek',
      8 => 'field_mentoring_other_thisweek',
      9 => 'field_other_step_2_thisweek',
      10 => 'field_strategic_plan_thisweek',
      11 => 'field_identify_ebps_thisweek',
      12 => 'field_prevention_best_thisweek',
      13 => 'field_other_step_3_thisweek',
      14 => 'field_strategy_impl_thisweek',
      15 => 'field_other_step_4_thisweek',
      16 => 'field_other_step_5_thisweek',
      17 => 'field_youth_development_thisweek',
      18 => 'field_social_marketing_thisweek',
      19 => 'field_social_norms_marketing_thi',
      20 => 'field_enforcement_this_week',
      21 => 'field_access_social_thisweek',
      22 => 'field_policy_thisweek',
      23 => 'field_working_w_parents_thisweek',
      24 => 'field_evaluation_thisweek',
      25 => 'field_sustainability_thisweek',
      26 => 'field_cultural_comp_thisweek',
      27 => 'field_other_cross_spf_this',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'New Topics',
      'instance_settings' => array(
        'classes' => ' group-topics-display field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_topics_display|node|weekly_report|default'] = $field_group;

  return $export;
}
