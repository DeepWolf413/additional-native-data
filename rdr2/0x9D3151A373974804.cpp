// ambush_bnd_sniper_attack.ysc @ L8090
void func_297()
{
  int iVar0;
  vector3 vVar1;
  int iVar5;

  iVar5 = 2;
  while (iVar5 <= 4)
  {
    func_127(&iLocal_15, iVar5, 1);
    func_128(&iLocal_15, iVar5, 1);
    vVar1 = { func_414(&Local_274, iVar5) };
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_15[iVar5], vVar1, 3f, 1, 0, 0);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
    func_197(iLocal_15[iVar5], &iVar0, 0, 0, 1, 1);
    iVar5++;
  }
}