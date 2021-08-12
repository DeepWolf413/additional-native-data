// native3.ysc @ L66820
void func_1321()
{
  int iVar0;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  iVar0 = 50;
  iVar1 = Local_109.f_11;
  fVar2 = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(sLocal_51, iVar0);
  fVar3 = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(sLocal_51, iVar1);
  fVar4 = func_1643((fVar3 / fVar2), 0f, 1f);
  func_1860(22, 0, fVar4, &uLocal_6577);
}