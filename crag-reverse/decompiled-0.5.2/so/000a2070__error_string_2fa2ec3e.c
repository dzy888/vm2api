// 000a2070 error_string

/* std[6c98fd8553dbae28]::sys::io::error::unix::error_string */

undefined8 __rustcall std[6c98fd8553dbae28]::sys::io::error::unix::error_string(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  iVar2 = (*(code *)PTR___xpg_strerror_r_000c44c0)
                    (0,0x80,in_R8,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (iVar2 < 0) {
    (*(code *)PTR_panic_fmt_000c3e90)
              (extraout_XMM0_Da,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1f58);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = (*(code *)PTR_strlen_000c4260)();
  (*(code *)PTR_from_utf8_lossy_000c3c60)(extraout_XMM0_Da_00,uVar3);
  (*(code *)PTR_from_000c44c8)();
  return param_1;
}


