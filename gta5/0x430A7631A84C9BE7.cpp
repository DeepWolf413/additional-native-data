// fm_bj_race_controler.ysc @ L321891
void func_4483(var uParam0, var uParam1, var uParam2)
{
  Global_1574443 = 1;
  MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_128), true);
  if (((!func_244(uParam0, 0) && MISC::IS_BIT_SET(Global_4456448.f_30, 12)) && !func_244(uParam0, 0)) && !func_142(PLAYER::PLAYER_ID(), 0))
  {
    func_3377();
  }
  func_4484(uParam1, uParam2);
  if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_job_load"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("MP_job_load");
  }
  func_4385(uParam0, uParam1);
  if (func_255(uParam0))
  {
    func_3974(&(uParam2->f_8635));
  }
  if (MISC::IS_BIT_SET(Global_4456448.f_26, 5))
  {
    VEHICLE::_0x430A7631A84C9BE7(1);
  }
}