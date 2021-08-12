// abigail2_1.ysc @ L37983
void func_907(char[4] cParam0)
{
  int iVar0;
  struct<8> Var1;
  bool bVar9;

  switch (func_1445(&iVar0))
  {
    case 1:
      func_1446(cParam0, Var1, 1, 0);
      break;
    case 3:
      if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(cParam0->f_13178))
      {
        cParam0->f_13178 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
      }
      if (func_183(iVar0) && iVar0 == func_12(cParam0->f_607))
      {
        bVar9 = true;
      }
      DATABINDING::_DATABINDING_WRITE_DATA_BOOL(cParam0->f_13178, bVar9);
      break;
  }
}