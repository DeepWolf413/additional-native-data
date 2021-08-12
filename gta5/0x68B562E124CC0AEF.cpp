// fm_mission_controller_2020.ysc @ L379919
int func_6059(var uParam0, int iParam1)
{
  if (uParam0->f_2)
  {
    ENTITY::_0x68B562E124CC0AEF(iParam1, uParam0->f_11);
    ENTITY::_0x68B562E124CC0AEF(uParam0->f_11, iParam1);
    ENTITY::_0x68B562E124CC0AEF(ENTITY::GET_ENTITY_ATTACHED_TO(iParam1), uParam0->f_11);
    ENTITY::_0x68B562E124CC0AEF(uParam0->f_11, ENTITY::GET_ENTITY_ATTACHED_TO(iParam1));
    ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_11, true);
    ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_11, false);
    ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_11, false);
    return 1;
  }
  return 0;
}