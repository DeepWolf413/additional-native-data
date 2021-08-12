// beat_friendly_outdoorsman.ysc @ L5455
void func_154()
{
  int iVar0;
  int iVar1;

  iVar0 = func_363(iLocal_212);
  TELEMETRY::_TELEMETRY_HERB_PICKED(iVar0);
  COMPENDIUM::COMPENDIUM_HERB_PICKED(iVar0, Local_14.f_51);
  if (!func_364(iLocal_212))
  {
    func_365(iLocal_212, 0, 1);
  }
  if (func_138() == -1)
  {
    if (func_366(Global_1835011[4 /*74*/].f_1, 1))
    {
      iVar1 = func_367(iLocal_212);
      if (iVar1 != -1)
      {
        func_368(iVar1, 1);
      }
    }
  }
  func_370(func_369(joaat("PICK"), iVar0), 1);
  func_370(func_371(joaat("HERBS_PICKED_TOTAL")), 1);
}