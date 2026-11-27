// 000a8e00 <panic_unwind[69967eabe7c96ba7]::imp::Exception>

/* WARNING: Switch with 1 destination removed at 0x000a8e37 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<panic_unwind[69967eabe7c96ba7]::imp::Exception> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<panic_unwind[69967eabe7c96ba7]::imp::Exception>
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)();
  }
  if (param_2[1] == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,param_2[2]);
  return;
}


