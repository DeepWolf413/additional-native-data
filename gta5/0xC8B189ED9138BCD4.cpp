// controller_taxi.ysc @ L3140
void func_89()
{
  if (func_82(Global_112293.f_19095, 4))
  {
    func_90(&(Global_112293.f_19095), 4);
    VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), false);
  }
  if (func_82(Global_112293.f_19095, 256))
  {
    func_90(&(Global_112293.f_19095), 256);
    func_4(&iLocal_108);
  }
  if (iLocal_98 != 0)
  {
    if (SCRIPT::IS_THREAD_ACTIVE(iLocal_98))
    {
      SCRIPT::TERMINATE_THREAD(iLocal_98);
      iLocal_98 = 0;
    }
  }
  if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_99) != 0)
  {
    SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_99);
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_105))
  {
    HUD::REMOVE_BLIP(&iLocal_105);
  }
  SCRIPT::TERMINATE_THIS_THREAD();
}