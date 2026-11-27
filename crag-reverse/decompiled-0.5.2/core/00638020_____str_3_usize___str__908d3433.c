// 00638020 <[&str;3:usize],&str>

/* <tokio[d7d91d38da47d894]::process::Command>::args::<[&str; 3usize], &str> */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::process::Command>::args::<[&str_3:usize],&str>
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_arg_00799368;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  (*(code *)PTR_arg_00799368)(param_4,*(undefined8 *)(param_2 + 8));
  (*(code *)puVar3)(param_4,uVar1);
  (*(code *)puVar3)(param_4,uVar2);
  return param_1;
}


