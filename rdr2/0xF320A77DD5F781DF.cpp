// bjack_sp.ysc @ L9803
void func_324(var uParam0)
{
  int iVar0;

  if (uParam0->f_1 != 5)
  {
    if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
    {
      func_800(uParam0);
      iVar0 = 0;
      while (iVar0 < 6)
      {
        func_801(uParam0, iVar0);
        iVar0++;
      }
      func_698(uParam0);
      UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1631983120);
      UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_2));
    }
    func_699(uParam0, 5);
  }
  if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6))
  {
    DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
    uParam0->f_196 = (uParam0->f_196 - 1);
  }
}