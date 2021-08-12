// maintransition.ysc @ L137858
void func_1419(bool bParam0)
{
  if (Global_2464909 == 0)
  {
    if (bParam0)
    {
      DLC::ON_ENTER_MP();
      Global_2464909 = bParam0;
    }
  }
  else if (bParam0 == 0)
  {
    DLC::ON_ENTER_SP();
    Global_2464909 = bParam0;
    Global_37794 = 1;
  }
}