// fm_mission_controller_2020.ysc @ L383800
void func_6240(var uParam0)
{
  bool bVar0;
  
  if (HUD::DOES_BLIP_EXIST(uLocal_23082[uParam0->f_9]))
  {
    if (func_3046(uLocal_23082[uParam0->f_9]))
    {
      bVar0 = SYSTEM::ROUND(func_6241(uParam0));
      if (HUD::_GET_BLIP_ROTATION(uLocal_23082[uParam0->f_9]) != bVar0)
      {
        HUD::SET_BLIP_ROTATION(uLocal_23082[uParam0->f_9], bVar0);
      }
    }
  }
}