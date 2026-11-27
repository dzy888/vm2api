// 005536b0 <http_body[237d564c59cb9271]::frame::Frame<bytes[e9829e187354639b]::bytes::Bytes>>

/* WARNING: Switch with 1 destination removed at 0x00576869 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http_body[237d564c59cb9271]::frame::Frame<bytes[e9829e187354639b]::bytes::Bytes>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http_body[237d564c59cb9271]::frame::Frame<bytes[e9829e187354639b]::bytes::Bytes>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x005536d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 2) + 0x20))
              (*(code **)(*(longlong *)(param_1 + 2) + 0x20),*(undefined8 *)(param_1 + 6));
    return;
  }
  if (*(longlong *)(param_1 + 0x14) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,2);
  }
  <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
  if (*(longlong *)(param_1 + 6) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar3 = *(longlong *)(param_1 + 0xe) + 0x38;
  for (lVar2 = *(longlong *)(param_1 + 0x10) + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    plVar1 = (longlong *)(lVar3 + -0x18);
    lVar3 = lVar3 + 0x48;
    (**(code **)(*plVar1 + 0x20))();
  }
  if (*(longlong *)(param_1 + 0xc) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


