// 0050b0f0 parse_upstream_sse_error

/* craggemini_core[66f3c71560d70857]::protocol::parse_upstream_sse_error */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::protocol::parse_upstream_sse_error
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 local_20;
  
  local_98[0] = 0xffffffffffffffff;
  local_80 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  local_38 = 0xffffffffffffffff;
  local_20 = 0xffffffffffffffff;
  build_failure_from_error_json(param_1,0,param_2,local_98,1);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>(local_98);
  return param_1;
}


