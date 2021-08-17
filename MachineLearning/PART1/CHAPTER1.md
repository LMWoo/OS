1. 머신러닝 이란?
   - 데이터를 통해 기계가 스스로 학습하는 알고리즘을 만드는 것

2. 머신러닝이 도움을 줄 수 있는 4가지 유형 
   - 너무 복잡하거나 알려진 알고리즘이 없는 문제 ex) 음성인식에서 'one'과 'two' 두 단어를 구분하는 문제
   - 입력 데이터가 계속 유동적으로 바뀌는 경우 머신러닝은 코드 변경없이 스스로 학습되어 작동됨
   - 학습한 데이터를 통해 새로운 패턴을 발견하는 경우(데이터 마이닝)
   - 수많은 규칙이 있는 경우 하나의 알고리즘(모델)로 만들 수 있음(실제 코딩으로 짤때는 if문이...)

3. 레이블된 훈련 세트란?
   - 각 훈련 데이터에 정답이 있는 훈련 세트(training set)에 정답(label)이 포함된 세트 

4. 자주 쓰이는 지도 학습(supervised learning)의 2가지 유형
   - 분류(classification)
   - 회귀(regression)

5. 자주 쓰이는 비지도 학습(unsupervised learning)의 4가지 유형
   - 군집(clustering)
   - 시각화(visualization)
   - 차원 축소(dimensionality reduction)
   - 연관 규칙 학습(association rule learning)

6. 사전 정보가 없는 여러 지형에서 로봇을 걸어가게 하려면 어떤 유형의 알고리즘을 사용해야 하는가?
   - 강화 학습(reinforcement learning), 가장 큰 보상을 얻기 위해 정책(policy)라고 부르는 최상의 전략을 스스로 학습 ex) 딥마인드의 알파고

7. 고객들을 여러 그룹으로 분류하기 위한 방법은?
   - 지도 학습의 분류(training set에 label이 있을 경우)
   - 비지도 학습의 군집(training set에 label이 없을 경우)

8. 스팸 감지의 문제의 해결 방법
   - 지도 학습의 분류 ex) 스팸이면 1, 아니면 0으로 label을 준다

9. 온라인 학습(online learning)이란?
   - 모델을 런칭 후에도 데이터를 실시간으로 미니배치(mini-batch)라 부르는 작은 묶음 단위로 주입하여 훈련시킨다
   - 변화하는 데이터를 학습 시키므로 필요없는 데이터를 버려 데이터 공간을 확보한다.

10. 외부 메모리 학습(out-of-core learning)이란?
   - 메인 메모리의 용량이 부족할 경우 온라인 학습 방식으로 학습한다.

11. 유사도 측정에 의존하는 학습 알고리즘 방법은?
   - 사례 기반 학습(instance-based learning), 새로운 훈련 데이터를 기억하며 학습하며 기존 학습한 데이터와 유사도를 측정하여 가장 유사한 클래스로 분류된다.

12. 모델 파라미터(model parameter)와 하이퍼파라미터(hyperparameter)의 차이
   - 모델 파라미터 : 모델이 학습하면서 최적의 값을 찾는 파라미터
   - 하이퍼파라미터 : 학습 전에 미리 지정되고 학습 중에는 고정된 상수 값을 가지는 파라미터 ex) learning rate

13. 모델 기반 알고리즘 목표, 일반적인 학습 전략
   - 목표 : 새로운 데이터에 잘 일반화되기 위한 모델 파라미터의 최적의 값을 찾는다.
   - 전략 : 훈련 데이터를 훈련 세트와 테스트 세트로 나누는 것, 훈련 세트로 훈련된 모델에 새로운 샘플(테스트 세트)에서 평가하여 모델의 적합도를 측정한다. 

14. 머신러닝의 주요 과제
   - 충분하지 않은 훈련 데이터, 대표성 없는 훈련 데이터(표본 추출이 잘못된 것), 낮은 품질의 데이터, 관련 없는 특성, 훈련 데이터 과대적합(overfitting), 훈련 데이터 과소적합(underfitting) 등

15. 모델이 훈련 데이터에서 성능이 좋지만 새로운 샘플에서 일반화 성능이 나쁘면 어떤 문제를 해결해야 하는가?
   - 
19. What is a test set and why would you want to use it?
20. What is the purpose of a validation set?
21. What can go wrong if you tune hyperparameters using the test set?
22. What is repeated cross-validation and why would you prefer it to using a single validation set?
