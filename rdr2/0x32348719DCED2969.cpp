// finale2.ysc @ L37677
bool func_824(var uParam0)
{
  if (!PLAYER::_0x32348719DCED2969(PLAYER::PLAYER_ID()))
  {
    func_424(&iLocal_70, 131072);
  }
  if (PLAYER::_0x51139D8C17B16FBC(PLAYER::PLAYER_ID()))
  {
    func_424(&iLocal_70, 262144);
  }
  if (func_1051(Local_140, 0))
  {
    ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_140);
    PED::CLEAR_PED_LAST_DAMAGE_BONE(Local_140);
  }
  return uParam0->f_607 == uParam0->f_607;
}