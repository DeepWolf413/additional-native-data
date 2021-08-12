// gang_enc_bandito_shack.ysc @ L5924
void func_148()
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar4;

  if (((!Local_18[0 /*5*/].f_4 && !Local_18[1 /*5*/].f_4) && !Local_18[2 /*5*/].f_4) && !Local_18[3 /*5*/].f_4)
  {
    if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"), -3552.6f, -3010.4f, 12.2f, 20f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_WINDOW_SMASHED"), -3552.6f, -3010.4f, 12.2f, 20f))
    {
      iVar0 = 0;
      while (iVar0 < Local_18)
      {
        Local_18[iVar0 /*5*/].f_4 = 1;
        iVar0++;
      }
    }
  }
  iVar0 = 0;
  while (iVar0 < Local_18)
  {
    if (!Local_18[iVar0 /*5*/].f_4)
    {
      VOLUME::_GET_VOLUME_BOUNDS(Local_18[iVar0 /*5*/].f_3, &vVar1, &vVar4);
      if (MISC::IS_BULLET_IN_BOX(vVar1, vVar4, true))
      {
        Local_18[iVar0 /*5*/].f_4 = 1;
      }
    }
    iVar0++;
  }
}