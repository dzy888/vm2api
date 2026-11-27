// 00162d60 {closure#0}

/* <craggemini[b21da2d71f2da7a3]::license::LicenseGate>::status_at_for_payload::{closure#0} */

void __rustcall
<craggemini[b21da2d71f2da7a3]::license::LicenseGate>::status_at_for_payload::_closure_0_
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
          char param_6)

{
  int iVar1;
  
  if ((param_6 == -1) && (param_6 = -1, param_2 != 0)) {
    if (*(longlong *)(param_5 + 0x138) == param_3) {
      iVar1 = (*(code *)PTR_bcmp_00219d38)();
      param_6 = -1;
      if (iVar1 == 0) goto LAB_00162da5;
    }
    param_6 = '\x05';
  }
LAB_00162da5:
  <craggemini[b21da2d71f2da7a3]::license::LicenseStatus>::make
            (param_1,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),param_5 + 0xf0,
             param_6);
  return;
}


