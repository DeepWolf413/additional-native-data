// event_area_centralunion_stg1.ysc @ L25853
void func_714()
{
  if (!func_335(iLocal_3981[0], 0, 1))
  {
    func_113(17);
  }
  else if (func_266(iLocal_3981[0], 1, 1) > 20f || func_262(131072))
  {
    func_700(0);
    func_680(0, 1, 0);
    func_106(4194304);
    func_372(&(Local_3653.f_35), "RCMP_THIEFFLEE", iLocal_3981[0], Global_35, 0, 0, 1, 0);
    TASK::UPDATE_TASK_HANDS_UP_DURATION(iLocal_3981[0], 1);
    func_113(17);
  }
}