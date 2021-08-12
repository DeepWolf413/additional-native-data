// fm_mission_controller.ysc @ L674222
void func_11133(int iParam0)
{
  if (!MISC::IS_BIT_SET(bLocal_14852, 22))
  {
    PED::CLEAR_PED_PROP(iLocal_3286, 0);
    PLAYER::REMOVE_PLAYER_HELMET(bLocal_3284, true);
    func_11134(iParam0);
    MISC::SET_BIT(&bLocal_14852, 22);
  }
}