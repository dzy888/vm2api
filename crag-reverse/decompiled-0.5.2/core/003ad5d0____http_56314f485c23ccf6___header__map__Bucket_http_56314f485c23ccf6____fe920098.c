// 003ad5d0 <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  while( true ) {
    bVar1 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar1) break;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x40) + 0x20))(param_4,*(undefined8 *)(param_1 + 0x50));
    }
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))(param_4,*(undefined8 *)(param_1 + 0x28));
    param_1 = param_1 + 0x68;
  }
  return;
}


