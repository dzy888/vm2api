// 005ab740 <craggemini_core[66f3c71560d70857]::multiprotocol::OutputProtocol>

/* WARNING: Switch with 1 destination removed at 0x005ab757 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::multiprotocol::OutputProtocol>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::multiprotocol::OutputProtocol>
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*param_1 < 2) || (*(longlong *)(param_1 + 8) == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


