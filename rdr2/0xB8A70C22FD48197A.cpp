// rcm_gunslinger5_1.ysc @ L45662
bool func_1592()
{
  if (((((((((PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || PED::GET_PED_STEALTH_MOVEMENT(Global_35)) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM"))) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JUMPING(Global_35)) || PED::IS_PED_FALLING(Global_35)) || PED::IS_PED_RAGDOLL(Global_35)) || PED::IS_PED_IN_COVER(Global_35, false, false)) || ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) || PED::IS_PED_VAULTING(Global_35))
  {
    return true;
  }
  return false;
}