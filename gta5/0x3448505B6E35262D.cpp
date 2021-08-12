// am_mp_armory_truck.ysc @ L4261
int func_59(int iParam0)
{
  int iVar0;
  
  iVar0 = func_62(Global_262145.f_5002[iParam0]);
  if (iVar0 != -1)
  {
    if (func_60(&(Local_3143[iParam0 /*5*/]), &(Global_794709.f_4[iVar0 /*88*/]), Global_794709.f_4[iVar0 /*88*/].f_66, 1, Global_794709.f_4[iVar0 /*88*/].f_67, 0))
    {
      if (Local_3143[iParam0 /*5*/].f_4)
      {
        StringCopy(&(Global_74484[iParam0 /*6*/]), NETWORK::TEXTURE_DOWNLOAD_GET_NAME(Local_3143[iParam0 /*5*/]), 24);
      }
    }
    else
    {
      return 0;
    }
  }
  return 1;
}