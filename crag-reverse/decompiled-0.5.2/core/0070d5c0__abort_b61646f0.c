// 0070d5c0 abort

/* bytes[e9829e187354639b]::abort */

void __rustcall bytes[e9829e187354639b]::abort(void)

{
  code *pcVar1;
  
  (*(code *)PTR_abort_00799748)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


