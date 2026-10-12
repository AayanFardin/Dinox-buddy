void shake_detec(){
  sensors_event_t accel, gyro, temp;
  mpu.getEvent(&accel, &gyro, &temp);

  float magnitude = sqrt(
    accel.acceleration.x * accel.acceleration.x +
    accel.acceleration.y * accel.acceleration.y +
    accel.acceleration.z * accel.acceleration.z
  );

  if (abs(magnitude - 9.81) > shakeThreshold) {
    shake = true;
  } else {
    shake = false;
  }
}