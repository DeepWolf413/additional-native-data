// creator.ysc @ L91912
void func_465(var uParam0, int iParam1, int iParam2)
{
  if (iParam1 == 0 || iParam1 == 1)
  {
    if (NETWORK::UGC_GET_CONTENT_IS_VERIFIED(uParam0->f_7))
    {
      if (Global_939452.f_5[iParam2 /*88*/].f_65 == 2)
      {
        func_469(Global_944982.f_5[iParam2 /*88*/].f_22);
      }
      else if (Global_939452.f_5[iParam2 /*88*/].f_65 == 1)
      {
        func_468(Global_944982.f_5[iParam2 /*88*/].f_22);
      }
      else if (Global_939452.f_5[iParam2 /*88*/].f_65 == 4)
      {
        func_466(Global_944982.f_5[iParam2 /*88*/].f_22);
      }
    }
  }
}