// beat_foot_robbery.ysc @ L16982
void func_521()
{
  var uVar0;

  if (func_98(iLocal_528[0], joaat("BBREAKOUTSTANDING"), "bBreakoutStanding", uVar0, 1.6f, 1) && PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 30f))
  {
    ANIMSCENE::_0x99B2A2E3655DEAF1(iLocal_528[0], "ClosestScenario");
    func_684(iLocal_528[0], Global_36, 6, 0, 1);
    TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[0], Global_35, -1, -1f, -1f, -1f);
  }
}