// 007696f0 <alloc[12e961f32105355]::boxed::Box<panic_unwind[69967eabe7c96ba7]::imp::Exception>>

/* WARNING: Switch with 1 destination removed at 0x00769741 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<panic_unwind[69967eabe7c96ba7]::imp::Exception>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<panic_unwind[69967eabe7c96ba7]::imp::Exception>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


