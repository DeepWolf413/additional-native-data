// barcustomer_interaction.ysc @ L467
void func_15()
{
  int iVar0;

  if (!Global_1935369.f_51)
  {
    if (Global_1935369.f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
    {
      Global_1935369.f_50 = 0;
    }
    if (func_13(iLocal_28))
    {
      return;
    }
    iVar0 = func_35(iLocal_28);
    if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
    {
      PERSCHAR::_0xA2B18FF8D39F6D87(iVar0);
      PERSCHAR::_0x631CD2D77FDC0316(iVar0);
    }
  }
  else
  {
    Global_1935369.f_50 = 0;
  }
}