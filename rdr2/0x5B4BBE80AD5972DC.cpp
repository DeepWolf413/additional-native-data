// beat_friendly_outdoorsman.ysc @ L5810
void func_175()
{
  float fVar0;
  vector3 vVar1;
  vector3 vVar4;
  int iVar7;

  fVar0 = (30f * 0.5f);
  iLocal_328 = func_389(-fVar0, -fVar0, -fVar0, fVar0, fVar0, fVar0, Local_14.f_51, 30f, 0, 0);
  iLocal_353 = func_152(func_151(iLocal_212), 0, 0);
  Local_330.f_3 = 1;
  vVar1 = { Local_14.f_51 + Vector(0f, 2f, -0.5f) };
  vVar4 = { Local_14.f_51 + Vector(0f, -1.15f, 1.28f) };
  func_81(&vVar1, 50, 10, 0);
  func_81(&vVar4, 50, 10, 0);
  iVar7 = 0;
  uLocal_453 = TASK::_0x5B4BBE80AD5972DC(iLocal_456, vVar1, 0f, 0, &iVar7, -1);
  uLocal_454 = TASK::_0x5B4BBE80AD5972DC(iLocal_456, vVar4, 0f, 0, &iVar7, -1);
}