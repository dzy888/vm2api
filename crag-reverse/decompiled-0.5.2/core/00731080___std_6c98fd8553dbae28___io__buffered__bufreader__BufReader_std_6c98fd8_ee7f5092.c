// 00731080 <std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::fs::File>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::fs::File>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::fs::File>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_close_00799030)();
  return;
}


