// freemode.ysc @ L936367
void func_14038(bool bParam0)
{
  int iVar0;
  
  if (HUD::IS_MP_GAMER_TAG_ACTIVE(bParam0))
  {
    if (Global_1389866.f_265 == 1)
    {
      if (MISC::IS_BIT_SET(Global_2426865[bParam0 /*449*/].f_238, 17))
      {
        iVar0 = func_2283(&(Global_1389866.f_266), 0, 0);
        iVar0 = (iVar0 + SYSTEM::ROUND((-177f / 0.8f)));
        if (iVar0 > SYSTEM::ROUND((190f * 4f)))
        {
          func_19544(&(Global_1389866.f_266));
          func_119(&(Global_1389866.f_266), 0, 0);
          iVar0 = func_2283(&(Global_1389866.f_266), 0, 0);
        }
        else if (iVar0 > 190)
        {
          iVar0 = 190;
        }
        else if (iVar0 < 0)
        {
          iVar0 = 0;
        }
        HUD::SET_MP_GAMER_TAG_ALPHA(bParam0, 17, iVar0);
      }
    }
  }
}