// short_update.ysc @ L100172
void func_3260(int iParam0, int iParam1, var uParam2, var uParam3)
{
  int iVar0;
  int iVar1;

  if (func_906(iParam0, 58855631))
  {
    func_3902(iParam0, -915411861, &iVar1, 1);
    iVar0 = (iParam1 * (iVar1 - 1));
    TELEMETRY::_TELEMETRY_LOOT(uParam2, uParam3, iParam0, iVar0);
  }
}