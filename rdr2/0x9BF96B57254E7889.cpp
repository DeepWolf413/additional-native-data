// act_bankrobbery01.ysc @ L55830
bool func_1788()
{
  if (((((((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_CAR_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_ATTACK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_BLOCK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_RELOAD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ENTER"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_DYNAMIC_SCENARIO"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
  {
    return true;
  }
  return false;
}

Vector3 func_1789(int iParam0)
{
  vector3 vVar0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  if (!CAM::DOES_CAM_EXIST(iParam0))
  {
    vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
  }
  else
  {
    vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
  }
  fVar3 = BUILTIN::SIN(vVar0.z);
  fVar4 = BUILTIN::COS(vVar0.z);
  fVar5 = BUILTIN::SIN(vVar0.x);
  fVar6 = BUILTIN::COS(vVar0.x);
  return func_1790((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}