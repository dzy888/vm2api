// 006381f0 <&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>,&alloc[12e961f32105355]::string::String>

/* <tokio[d7d91d38da47d894]::process::Command>::args::<&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>,
   &alloc[12e961f32105355]::string::String> */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::process::Command>::args::
<&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>,&alloc[12e961f32105355]::string::String>
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = PTR_arg_00799368;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar4 = 0;
    do {
      (*(code *)puVar3)(param_4,*(undefined8 *)(lVar2 + 0x10 + lVar4));
      lVar4 = lVar4 + 0x18;
    } while (lVar1 * 0x18 != lVar4);
  }
  return param_1;
}


