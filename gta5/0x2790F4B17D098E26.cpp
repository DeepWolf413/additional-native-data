// fm_mission_controller_2020.ysc @ L309646
void func_4137(int iParam0, bool bParam1)
{
  if (HUD::DOES_BLIP_EXIST(Local_34913[iParam0 /*56*/].f_15[bParam1]))
  {
    HUD::REMOVE_BLIP(&(Local_34913[iParam0 /*56*/].f_15[bParam1]));
    Local_34913[iParam0 /*56*/].f_52 = (Local_34913[iParam0 /*56*/].f_52 - 1);
    if (Local_34913[iParam0 /*56*/].f_53 == bParam1)
    {
      HUD::_0x2790F4B17D098E26(false);
      Local_34913[iParam0 /*56*/].f_53 = -1;
    }
  }
}