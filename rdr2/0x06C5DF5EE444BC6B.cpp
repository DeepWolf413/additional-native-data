// poker_sp.ysc @ L4284
void func_179(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/][iParam2]))
  {
    OBJECT::DELETE_OBJECT(&(uParam0->f_73[iParam1 /*30*/][iParam2]));
    AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
    uParam0->f_73[iParam1 /*30*/][iParam2] = 0;
  }
  ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam3, true, true);
  ENTITY::SET_ENTITY_COLLISION(iParam3, false, false);
  ENTITY::FREEZE_ENTITY_POSITION(iParam3, true);
  AUDIO::_0x06C5DF5EE444BC6B(iParam1, iParam2, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
  uParam0->f_73[iParam1 /*30*/][iParam2] = iParam3;
  uParam0->f_73[iParam1 /*30*/].f_5[iParam2] = uParam4;
  uParam0->f_73[iParam1 /*30*/].f_10[iParam2] = uParam5;
}