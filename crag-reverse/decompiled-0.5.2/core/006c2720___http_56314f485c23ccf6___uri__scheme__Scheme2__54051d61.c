// 006c2720 <http[56314f485c23ccf6]::uri::scheme::Scheme2>

/* WARNING: Switch with 1 destination removed at 0x006c275b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::uri::scheme::Scheme2> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::uri::scheme::Scheme2>
          (byte param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 < 2) {
    return;
  }
  (**(code **)(*param_2 + 0x20))(param_4,param_2[2]);
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


