<?php
/**
 * @file
 * amp_user_ctype.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function amp_user_ctype_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_address_1'
  $field_bases['field_address_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_1',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_address_2'
  $field_bases['field_address_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_2',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 40,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_city'
  $field_bases['field_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_city',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 30,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country'
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 20,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country_list'
  $field_bases['field_country_list'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country_list',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'United States' => 'United States',
        'Canada' => 'Canada',
        'Afghanistan' => 'Afghanistan',
        'Albania' => 'Albania',
        'Algeria' => 'Algeria',
        'American Samoa' => 'American Samoa',
        'Andorra' => 'Andorra',
        'Angola' => 'Angola',
        'Anguilla' => 'Anguilla',
        'Antarctica' => 'Antarctica',
        'Antigua and Barbuda' => 'Antigua and Barbuda',
        'Argentina' => 'Argentina',
        'Armenia' => 'Armenia',
        'Aruba' => 'Aruba',
        'Australia' => 'Australia',
        'Austria' => 'Austria',
        'Azerbaijan' => 'Azerbaijan',
        'Bahamas' => 'Bahamas',
        'Bahrain' => 'Bahrain',
        'Bangladesh' => 'Bangladesh',
        'Barbados' => 'Barbados',
        'Belarus' => 'Belarus',
        'Belgium' => 'Belgium',
        'Belize' => 'Belize',
        'Benin' => 'Benin',
        'Bermuda' => 'Bermuda',
        'Bhutan' => 'Bhutan',
        'Bolivia' => 'Bolivia',
        'Bosnia and Herzegowina' => 'Bosnia and Herzegowina',
        'Botswana' => 'Botswana',
        'Bouvet Island' => 'Bouvet Island',
        'Brazil' => 'Brazil',
        'British Indian Ocean Territory' => 'British Indian Ocean Territory',
        'Brunei Darussalam' => 'Brunei Darussalam',
        'Bulgaria' => 'Bulgaria',
        'Burkina Faso' => 'Burkina Faso',
        'Burundi' => 'Burundi',
        'Cambodia' => 'Cambodia',
        'Cameroon' => 'Cameroon',
        'Cape Verde' => 'Cape Verde',
        'Cayman Islands' => 'Cayman Islands',
        'Central African Republic' => 'Central African Republic',
        'Chad' => 'Chad',
        'Chile' => 'Chile',
        'China' => 'China',
        'Christmas Island' => 'Christmas Island',
        'Cocos (Keeling) Islands' => 'Cocos (Keeling) Islands',
        'Colombia' => 'Colombia',
        'Comoros' => 'Comoros',
        'Congo' => 'Congo',
        'Cook Islands' => 'Cook Islands',
        'Costa Rica' => 'Costa Rica',
        'Cote D\'Ivoire' => 'Cote D\'Ivoire',
        'Croatia' => 'Croatia',
        'Cuba' => 'Cuba',
        'Cyprus' => 'Cyprus',
        'Czech Republic' => 'Czech Republic',
        'Denmark' => 'Denmark',
        'Djibouti' => 'Djibouti',
        'Dominica' => 'Dominica',
        'Dominican Republic' => 'Dominican Republic',
        'East Timor' => 'East Timor',
        'Ecuador' => 'Ecuador',
        'Egypt' => 'Egypt',
        'El Salvador' => 'El Salvador',
        'Equatorial Guinea' => 'Equatorial Guinea',
        'Eritrea' => 'Eritrea',
        'Estonia' => 'Estonia',
        'Ethiopia' => 'Ethiopia',
        'Falkland Islands (Malvinas)' => 'Falkland Islands (Malvinas)',
        'Faroe Islands' => 'Faroe Islands',
        'Fiji' => 'Fiji',
        'Finland' => 'Finland',
        'France' => 'France',
        'France, Metropolitan' => 'France, Metropolitan',
        'French Guiana' => 'French Guiana',
        'French Polynesia' => 'French Polynesia',
        'French Southern Territories' => 'French Southern Territories',
        'Gabon' => 'Gabon',
        'Gambia' => 'Gambia',
        'Georgia' => 'Georgia',
        'Germany' => 'Germany',
        'Ghana' => 'Ghana',
        'Gibraltar' => 'Gibraltar',
        'Greece' => 'Greece',
        'Greenland' => 'Greenland',
        'Grenada' => 'Grenada',
        'Guadeloupe' => 'Guadeloupe',
        'Guam' => 'Guam',
        'Guatemala' => 'Guatemala',
        'Guinea' => 'Guinea',
        'Guinea-bissau' => 'Guinea-bissau',
        'Guyana' => 'Guyana',
        'Haiti' => 'Haiti',
        'Heard and Mc Donald Islands' => 'Heard and Mc Donald Islands',
        'Honduras' => 'Honduras',
        'Hong Kong' => 'Hong Kong',
        'Hungary' => 'Hungary',
        'Iceland' => 'Iceland',
        'India' => 'India',
        'Indonesia' => 'Indonesia',
        'Iran (Islamic Republic of)' => 'Iran (Islamic Republic of)',
        'Iraq' => 'Iraq',
        'Ireland' => 'Ireland',
        'Israel' => 'Israel',
        'Italy' => 'Italy',
        'Jamaica' => 'Jamaica',
        'Japan' => 'Japan',
        'Jordan' => 'Jordan',
        'Kazakhstan' => 'Kazakhstan',
        'Kenya' => 'Kenya',
        'Kiribati' => 'Kiribati',
        'Korea, Democratic People\'s Republic of' => 'Korea, Democratic People\'s Republic of',
        'Korea, Republic of' => 'Korea, Republic of',
        'Kuwait' => 'Kuwait',
        'Kyrgyzstan' => 'Kyrgyzstan',
        'Lao People\'s Democratic Republic' => 'Lao People\'s Democratic Republic',
        'Latvia' => 'Latvia',
        'Lebanon' => 'Lebanon',
        'Lesotho' => 'Lesotho',
        'Liberia' => 'Liberia',
        'Libyan Arab Jamahiriya' => 'Libyan Arab Jamahiriya',
        'Liechtenstein' => 'Liechtenstein',
        'Lithuania' => 'Lithuania',
        'Luxembourg' => 'Luxembourg',
        'Macau' => 'Macau',
        'Macedonia, The Former Yugoslav Republic of' => 'Macedonia, The Former Yugoslav Republic of',
        'Madagascar' => 'Madagascar',
        'Malawi' => 'Malawi',
        'Malaysia' => 'Malaysia',
        'Maldives' => 'Maldives',
        'Mali' => 'Mali',
        'Malta' => 'Malta',
        'Marshall Islands' => 'Marshall Islands',
        'Martinique' => 'Martinique',
        'Mauritania' => 'Mauritania',
        'Mauritius' => 'Mauritius',
        'Mayotte' => 'Mayotte',
        'Mexico' => 'Mexico',
        'Micronesia, Federated States of' => 'Micronesia, Federated States of',
        'Moldova, Republic of' => 'Moldova, Republic of',
        'Monaco' => 'Monaco',
        'Mongolia' => 'Mongolia',
        'Montserrat' => 'Montserrat',
        'Morocco' => 'Morocco',
        'Mozambique' => 'Mozambique',
        'Myanmar' => 'Myanmar',
        'Namibia' => 'Namibia',
        'Nauru' => 'Nauru',
        'Nepal' => 'Nepal',
        'Netherlands' => 'Netherlands',
        'Netherlands Antilles' => 'Netherlands Antilles',
        'New Caledonia' => 'New Caledonia',
        'New Zealand' => 'New Zealand',
        'Nicaragua' => 'Nicaragua',
        'Niger' => 'Niger',
        'Nigeria' => 'Nigeria',
        'Niue' => 'Niue',
        'Norfolk Island' => 'Norfolk Island',
        'Northern Mariana Islands' => 'Northern Mariana Islands',
        'Norway' => 'Norway',
        'Oman' => 'Oman',
        'Pakistan' => 'Pakistan',
        'Palau' => 'Palau',
        'Panama' => 'Panama',
        'Papua New Guinea' => 'Papua New Guinea',
        'Paraguay' => 'Paraguay',
        'Peru' => 'Peru',
        'Philippines' => 'Philippines',
        'Pitcairn' => 'Pitcairn',
        'Poland' => 'Poland',
        'Portugal' => 'Portugal',
        'Puerto Rico' => 'Puerto Rico',
        'Qatar' => 'Qatar',
        'Reunion' => 'Reunion',
        'Romania' => 'Romania',
        'Russian Federation' => 'Russian Federation',
        'Rwanda' => 'Rwanda',
        'Saint Kitts and Nevis' => 'Saint Kitts and Nevis',
        'Saint Lucia' => 'Saint Lucia',
        'Saint Vincent and the Grenadines' => 'Saint Vincent and the Grenadines',
        'Samoa' => 'Samoa',
        'San Marino' => 'San Marino',
        'Sao Tome and Principe' => 'Sao Tome and Principe',
        'Saudi Arabia' => 'Saudi Arabia',
        'Senegal' => 'Senegal',
        'Seychelles' => 'Seychelles',
        'Sierra Leone' => 'Sierra Leone',
        'Singapore' => 'Singapore',
        'Slovakia (Slovak Republic)' => 'Slovakia (Slovak Republic)',
        'Slovenia' => 'Slovenia',
        'Solomon Islands' => 'Solomon Islands',
        'Somalia' => 'Somalia',
        'South Africa' => 'South Africa',
        'South Georgia and the South Sandwich Islands' => 'South Georgia and the South Sandwich Islands',
        'Spain' => 'Spain',
        'Sri Lanka' => 'Sri Lanka',
        'St. Helena' => 'St. Helena',
        'St. Pierre and Miquelon' => 'St. Pierre and Miquelon',
        'Sudan' => 'Sudan',
        'Suriname' => 'Suriname',
        'Svalbard and Jan Mayen Islands' => 'Svalbard and Jan Mayen Islands',
        'Swaziland' => 'Swaziland',
        'Sweden' => 'Sweden',
        'Switzerland' => 'Switzerland',
        'Syrian Arab Republic' => 'Syrian Arab Republic',
        'Taiwan' => 'Taiwan',
        'Tajikistan' => 'Tajikistan',
        'Tanzania, United Republic of' => 'Tanzania, United Republic of',
        'Thailand' => 'Thailand',
        'Togo' => 'Togo',
        'Tokelau' => 'Tokelau',
        'Tonga' => 'Tonga',
        'Trinidad and Tobago' => 'Trinidad and Tobago',
        'Tunisia' => 'Tunisia',
        'Turkey' => 'Turkey',
        'Turkmenistan' => 'Turkmenistan',
        'Turks and Caicos Islands' => 'Turks and Caicos Islands',
        'Tuvalu' => 'Tuvalu',
        'Uganda' => 'Uganda',
        'Ukraine' => 'Ukraine',
        'United Arab Emirates' => 'United Arab Emirates',
        'United Kingdom' => 'United Kingdom',
        'United States Minor Outlying Islands' => 'United States Minor Outlying Islands',
        'Uruguay' => 'Uruguay',
        'Uzbekistan' => 'Uzbekistan',
        'Vanuatu' => 'Vanuatu',
        'Vatican City State (Holy See)' => 'Vatican City State (Holy See)',
        'Venezuela' => 'Venezuela',
        'Viet Nam' => 'Viet Nam',
        'Virgin Islands (British)' => 'Virgin Islands (British)',
        'Virgin Islands (UniversityS.)' => 'Virgin Islands (UniversityS.)',
        'Wallis and Futuna Islands' => 'Wallis and Futuna Islands',
        'Western Sahara' => 'Western Sahara',
        'Yemen' => 'Yemen',
        'Yugoslavia' => 'Yugoslavia',
        'Zaire' => 'Zaire',
        'Zambia' => 'Zambia',
        'Zimbabwe' => 'Zimbabwe',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_first_given_name'
  $field_bases['field_first_given_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_first_given_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 30,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_last_family_name'
  $field_bases['field_last_family_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_last_family_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 30,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organization'
  $field_bases['field_organization'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 40,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_state_province'
  $field_bases['field_state_province'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_state_province',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 30,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_state_province_us'
  $field_bases['field_state_province_us'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_state_province_us',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Not US/Canada' => 'Not US/Canada',
        'Alabama' => 'Alabama',
        'Alaska' => 'Alaska',
        'Arizona' => 'Arizona',
        'Arkansas' => 'Arkansas',
        'California' => 'California',
        'Colorado' => 'Colorado',
        'Connecticut' => 'Connecticut',
        'Delaware' => 'Delaware',
        'District Of Columbia' => 'District Of Columbia',
        'Florida' => 'Florida',
        'Georgia' => 'Georgia',
        'Hawaii' => 'Hawaii',
        'Idaho' => 'Idaho',
        'Illinois' => 'Illinois',
        'Indiana' => 'Indiana',
        'Iowa' => 'Iowa',
        'Kansas' => 'Kansas',
        'Kentucky' => 'Kentucky',
        'Louisiana' => 'Louisiana',
        'Maine' => 'Maine',
        'Maryland' => 'Maryland',
        'Massachusetts' => 'Massachusetts',
        'Michigan' => 'Michigan',
        'Minnesota' => 'Minnesota',
        'Mississippi' => 'Mississippi',
        'Missouri' => 'Missouri',
        'Montana' => 'Montana',
        'Nebraska' => 'Nebraska',
        'Nevada' => 'Nevada',
        'New Hampshire' => 'New Hampshire',
        'New Jersey' => 'New Jersey',
        'New Mexico' => 'New Mexico',
        'New York' => 'New York',
        'North Carolina' => 'North Carolina',
        'North Dakota' => 'North Dakota',
        'Ohio' => 'Ohio',
        'Oklahoma' => 'Oklahoma',
        'Oregon' => 'Oregon',
        'Pennsylvania' => 'Pennsylvania',
        'Rhode Island' => 'Rhode Island',
        'South Carolina' => 'South Carolina',
        'South Dakota' => 'South Dakota',
        'Tennessee' => 'Tennessee',
        'Texas' => 'Texas',
        'Utah' => 'Utah',
        'Vermont' => 'Vermont',
        'Virginia' => 'Virginia',
        'Washington' => 'Washington',
        'West Virginia' => 'West Virginia',
        'Wisconsin' => 'Wisconsin',
        'Wyoming' => 'Wyoming',
        'Puerto Rico' => 'Puerto Rico',
        'Virgin Island' => 'Virgin Island',
        'Northern Mariana Islands' => 'Northern Mariana Islands',
        'Guam' => 'Guam',
        'American Samoa' => 'American Samoa',
        'Palau' => 'Palau',
        'Alberta' => 'Alberta',
        'British Columbia' => 'British Columbia',
        'Manitoba' => 'Manitoba',
        'New Brunswick' => 'New Brunswick',
        'Newfoundland and Labrador' => 'Newfoundland and Labrador',
        'Nova Scotia' => 'Nova Scotia',
        'Nunavut' => 'Nunavut',
        'N.W.T.' => 'N.W.T.',
        'Ontario' => 'Ontario',
        'Prince Edward Island' => 'Prince Edward Island',
        'Quebec' => 'Quebec',
        'Saskatchewan' => 'Saskatchewan',
        'Yukon' => 'Yukon',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_stemcell_s_newsletter_conf'
  $field_bases['field_stemcell_s_newsletter_conf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_stemcell_s_newsletter_conf',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '<b>Yes, I would like to receive <i>Regenerative Medicine Weekly</i>, the Stem Cell Portal\'s FREE eNewsletter.</b>',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_terms_and_conditions'
  $field_bases['field_terms_and_conditions'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_terms_and_conditions',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_what_is_your_area_of_inter'
  $field_bases['field_what_is_your_area_of_inter'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_what_is_your_area_of_inter',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Cancer Stem Cells' => 'Cancer Stem Cells',
        'Cell-Based Drug Development, Screening, and Toxicology' => 'Cell-Based Drug Development, Screening, and Toxicology',
        'Embryonic Stem Cells/Induced Pluripotent Stem (iPS) Cells' => 'Embryonic Stem Cells/Induced Pluripotent Stem (iPS) Cells',
        'Enabling Technologies for Cell-Based Clinical Translation' => 'Enabling Technologies for Cell-Based Clinical Translation',
        'Fetal and Neonatal Stem Cells' => 'Fetal and Neonatal Stem Cells',
        'Standards, Policies, Protocols, and Regulations for Cell-Based Therapies' => 'Standards, Policies, Protocols, and Regulations for Cell-Based Therapies',
        'Protocols and Manufacturing for Cell-Based Therapies' => 'Protocols and Manufacturing for Cell-Based Therapies',
        'Tissue Engineering and Regenerative Medicine' => 'Tissue Engineering and Regenerative Medicine',
        'Tissue-Specific Progenitor and Stem Cells' => 'Tissue-Specific Progenitor and Stem Cells',
        'Translational and Clinical Research' => 'Translational and Clinical Research',
        'Stem Cell Technology: Epigenetics, Genomics, Proteomics, and Metabonomics' => 'Stem Cell Technology: Epigenetics, Genomics, Proteomics, and Metabonomics',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_what_is_your_professional_'
  $field_bases['field_what_is_your_professional_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_what_is_your_professional_',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Clinical Investigator' => 'Clinical Investigator',
        'Research Scientist' => 'Research Scientist',
        'Allied Health Professional' => 'Allied Health Professional',
        'Industry/Corporate Representative' => 'Industry/Corporate Representative',
        'Student' => 'Student',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_zip_postal_code'
  $field_bases['field_zip_postal_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_zip_postal_code',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 10,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
