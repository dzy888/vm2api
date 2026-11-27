// 006be560 parse_request_with_uninit_headers

/* <httparse[622c0e90ae307373]::ParserConfig>::parse_request_with_uninit_headers */

undefined8 __rustcall
<httparse[622c0e90ae307373]::ParserConfig>::parse_request_with_uninit_headers
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  <httparse[622c0e90ae307373]::Request>::parse_with_config_and_uninit_headers
            (param_1,param_3,param_4,param_5,param_2,param_6,param_7);
  return param_1;
}


