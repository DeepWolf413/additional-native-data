// bjack_sp.ysc @ L10668
void func_355(var uParam0, int iParam1, bool bParam2)
{
  uParam0->f_946[iParam1 /*46*/].f_44 = bParam2;
  if (bParam2)
  {
    PED::SET_PED_LEG_IK_MODE(uParam0->f_946[iParam1 /*46*/], 0);
  }
  else if (PED::IS_PED_A_PLAYER(uParam0->f_946[iParam1 /*46*/]))
  {
    PED::SET_PED_LEG_IK_MODE(uParam0->f_946[iParam1 /*46*/], 2);
  }
  else
  {
    PED::SET_PED_LEG_IK_MODE(uParam0->f_946[iParam1 /*46*/], 1);
  }
}