// 00731a90 <std[6c98fd8553dbae28]::panicking::resume_unwind::RewrapBox>

/* WARNING: Switch with 1 destination removed at 0x00731acb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::panicking::resume_unwind::RewrapBox>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::panicking::resume_unwind::RewrapBox>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
  return;
}


